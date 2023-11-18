## Lab1 TODO: create Makefile for functest here

# 1
# NAMES = add-longlong
# SRCS = src/add-longlong
# BASE_PORT = ../base-port
# # SIM_PATH = ## This is for running the simulator, you can ignore for Lab 1

# -include $(BASE_PORT)/Makefile

# 2
# NAMES ?= $(notdir $(basename $(wildcard src/*.c)))

# .PHONY: all
# all: $(NAMES)

# %: src/$(notdir $(basename %)).c
# 	@NAMES=$@ SRCS=$< BASE_PORT=../base-port make -s -f ../base-port/Makefile 

# 3
NAMES ?= $(notdir $(basename $(wildcard src/*.c))) # 可以使用 wildcard 函数来获取所有的程序名，使用方法请查阅 Makefile 教程
BASE_PORT = ../base-port
SRCS = $(addprefix src/, $(NAMES))
SIM_PATH = $(abspath "../../../../simulator")

RESULT = .result
$(shell > $(RESULT))

.PHONY: all
all: $(NAMES)

%: src/$(notdir $(basename %)).c
	@echo NAMES = $@ > run.mk; 
	@echo SRCS = src/$@ >> run.mk; 
	@echo BASE_PORT = $(BASE_PORT) >> run.mk; 
	@echo SIM_PATH = "$(SIM_PATH) >> run.mk; 
	@echo ARGS=-b >> run.mk;
	@echo -include $(BASE_PORT)/Makefile >> run.mk;
	@if make -s -f run.mk run ; then\
		echo "\033[1;32m$@\t ACCEPT\033[1;32m\n" >> $(RESULT);\
	else\
		echo "\033[1;31m$@\t FAILED\033[1;31m\n" >> $(RESULT);\
	fi
	@rm -rf run.mk

clean:
	@echo -include $(BASE_PORT)/Makefile >> $@.mk
	@make clean -s -f $@.mk
	@rm -rf $@.mk

clean-all:
	@echo -include $(BASE_PORT)/Makefile >> $@.mk
	@make clean-all -s -f $@.mk
	@rm -rf $@.mk

run: all
	cat $(RESULT)