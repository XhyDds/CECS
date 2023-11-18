#include <fs.h>
#include <debug.h>
#include <device.h>

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS, FD_FB, FD_DISPINFO};

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *  name;
  size_t  size;
  size_t  disk_offset;
  bool    is_open;
  ReadFn  read;
  WriteFn write;
  size_t  open_offset;
} Finfo;

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]    = {"stdin",           0, 0, 0, invalid_read,  invalid_write},
  [FD_STDOUT]   = {"stdout",          0, 0, 0, invalid_read,  serial_write},
  [FD_STDERR]   = {"stderr",          0, 0, 0, invalid_read,  serial_write},
  [FD_EVENTS]   = {"/dev/events",     0, 0, 0, keyboard_read,  invalid_write},
  [FD_FB]       = {"/dev/fb",         0, 0, 0, invalid_read,  fb_write},
  [FD_DISPINFO] = {"/proc/dispinfo",  0, 0, 0, dispinfo_read,  invalid_write},
  #include "files.h"
};

size_t find_offset(const char *filename){
    size_t disk_offset=0;
    for(int i=0;i<48;i++){
        Finfo* file=&file_table[i];
        if(file->name!=NULL)
            if(strcmp(file->name,filename)==0){
                // printf("%s", file->name);
                // printf("%d", file->disk_offset);
                disk_offset=file->disk_offset;
                break;
            }
    }
    return disk_offset;
}

/* Init the file system. */
void init_fs() {
  Log("Initializing file system...");
  DEV_GPU_CONFIG_T gpu_config = io_read(DEV_GPU_CONFIG);
  file_table[FD_FB].size = gpu_config.height * gpu_config.width * 4;
  file_table[FD_STDERR].is_open=true;
  file_table[FD_STDOUT].is_open=true;
}

/* Open a file and return the size of file-> */
int fs_open(const char *pathname, int flags, int mode) {
  // Lab7 TODO: traverse the file_table and find the file
//   Log("fs_open: filename: %s",pathname);
  for(int i=0;i<48;i++){
      Finfo* file=&file_table[i];
      if(file->name!=NULL)
          if(strcmp(file->name,pathname)==0){
            //   Log("find file: name:%s ,fd: %i ,size:%d",file->name,i,file->size);
              file->open_offset=0;
              file->is_open=true;
              return i;
          }
  }
  return -1;
}

/* Read `len` bytes of data from the file with `fd` into `buf` */
size_t fs_read(int fd, void *buf, size_t len) {
  // Lab7 TODO: read the file with fd from offset into buf
//   Log("fs_read: fd: %d",fd);
  if(fd<0 || fd>=48) return -1;
  Finfo* file=&file_table[fd];
  if(file->is_open==true){
    if(file->read==NULL){
        if(file->open_offset+len>file->size)
            len=file->size-file->open_offset;
        ramdisk_read(buf, file->disk_offset+file->open_offset, len);
        file->open_offset+=len;
        return len;
    }
    else{
        return file->read(buf, file->open_offset, len);
    }
  }
  return -1;
}


/* Write `len` bytes of data from `buf` into the file with `fd` */
size_t fs_write(int fd, const void *buf, size_t len) {
  // Lab7 TODO: write the file with fd from offset by buf
    if(fd<0 || fd>=48) {
        Log("fs_write:Bad fd:%d",fd);
        return -1;
    }
    Finfo* file=&file_table[fd];
    // Log("Writing file: name:%s ,fd:%d ,len:%d",file->name,fd,len);
    if(file->is_open==true){
        if(file->write==NULL){
            if(file->open_offset+len>file->size)
                len=file->size-file->open_offset;
            ramdisk_write(buf, file->disk_offset+file->open_offset, len);
            file->open_offset+=len;
            return len;
        }
        else{
            return file->write(buf, file->open_offset, len);
        }
    }
    Log("file not open");
    return -1;
}

/* Seek the file with `fd` from the `offset` based on `whence` */
size_t fs_lseek(int fd, size_t offset, int whence) {
  // Lab7 TODO: seek the file with fd from the offset based on whence
//   Log("fs_lseek: fd: %d",fd);
  if(fd<0 || fd>=48) return -1;
    Finfo* file=&file_table[fd];
    // Log("%d",file->is_open==true);
    if(file->is_open==true){
        switch(whence){
            case SEEK_SET:
                file->open_offset=offset;
                break;
            case SEEK_CUR:
                file->open_offset+=offset;
                break;
            case SEEK_END:
                file->open_offset=file->size+offset;
                break;
        }
        if(file->open_offset>file->size)
            file->open_offset=file->size;
        else if(file->open_offset<0)
            file->open_offset=0;
        // Log("fs_lseek: offset: %d",file->open_offset);
        return file->open_offset;
    }
  return -1;
}

/* Close the file with `fd` */
int fs_close(int fd){
  // Lab7 TODO: close the file with fd
//   Log("fs_close: fd: %d",fd);
  if(fd<0 || fd>=48) return -1;
    Finfo* file=&file_table[fd];
    if(file->is_open==true){
        file->is_open=false;
        return 0;
    }
  return -1;
}
