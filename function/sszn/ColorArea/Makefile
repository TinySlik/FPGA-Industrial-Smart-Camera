PROJECT=libColorArea.so

#include path
IDIR=../../../include
FPGAIDIR=../../../include/lfpga_include
ZYNQIDIR=../../../include/lzynq_include
TASKIDIR=../../../include/task
FUNCIDIR=../../../include/function/sszn
FUNC3PARTYIDIR=../../../include/function/third_party
CC=arm-linux-gnueabihf-gcc

#lib path
LIBPATH = ../../../lib/sszn
TOOLPATH = ../../../lib/sszn/tools/defect
#libs name
LIBS= -L. -lpthread -ldl
CFLAGES=  -I$(IDIR) -I$(TASKIDIR) -I$(ZYNQIDIR) -I$(FPGAIDIR) -I$(FUNCIDIR) -I$(FUNC3PARTYIDIR) -I$(ILIB) -g -O2 -fPIC -shared
LDFLAGS= -L$(LIBPATH) -ltask -lfpga -lzynq -lssznbasic
DIRS=.
FILES=$(foreach dir, $(DIRS), $(wildcard $(dir)/*.c))
OBJS=$(patsubst %.c,%.o,$(FILES))

$(PROJECT): $(OBJS)
	@echo CC -o $(PROJECT) $(OBJS) $(CFLAGES) $(LDFLAGS) $(LIBS)
	@$(CC) -O2 -o $(PROJECT) $(OBJS) $(CFLAGES) $(LDFLAGS) $(LIBS)
	cp $(PROJECT) $(TOOLPATH)
$(OBJS):%.o:%.c	
	@echo CC -c $(CFLAGES) $< -o $@ 
	@$(CC) -c $(CFLAGES) $< -o $@
clean:	
	rm $(PROJECT) $(OBJS)

