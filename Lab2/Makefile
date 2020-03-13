CC=gcc #Macro
OBJS=arrays.o functionsLab2.o exe.o  prog.o #Macro
EXEC=lab2 #Macro
DEBUG = -g #Macro
CFLAGS = -std=c99  -Wall -Werror $(DEBUG)  #if you have CFLAGS you do not have to write for each file $(CC) -c $*.c!!!

$(EXEC):$(OBJS) 
	$(CC) $(OBJS) -o $@  # gcc arrays.o functionsLab2.o exe.o  prog.o -o lab2


arrays.o: arrays.c arrays.h
exe.o: exe.c exe.h arrays.h functionsLab2.h
functionsLab2.o: functionsLab2.c functionsLab2.h arrays.h
prog.o: prog.c exe.h


clean: 
	rm -f $(EXEC) $(OBJS) #when type 'clean' EXEC and OBJS will delete

hello:
	echo "Hello World"
	
