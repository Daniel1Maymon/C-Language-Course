CC=gcc
OBJS=arrays.o exe.o  funcsLab3.o Prog3.o
EXEC=lab3
DEBUG = -g
CFLAGS = -std=c99  -Wall -Werror $(DEBUG)  #if you have CFLAGS you do not have to write for each file $(CC) -c $*.c!!!

$(EXEC) : $(OBJS)
	$(CC) $(OBJS) -o $@

arrays.o: arrays.c arrays.h
exe.o: exe.c exe.h funcsLab3.h
funcsLab3.o: funcsLab3.c funcsLab3.h
Prog3.o: Prog3.c exe.h

clean: 
	rm -f $(EXEC) $(OBJS)
	
