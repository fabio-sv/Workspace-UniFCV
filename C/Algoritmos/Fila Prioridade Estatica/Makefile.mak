CC     = gcc
WINDRES= windres
RM     = rm -f
OBJS   = FilaPrioridade.o \
         Main.o \
         AppResource.res

LIBS   =
CFLAGS =

.PHONY: FilaPrioridadesEstatica.exe clean clean-after

all: FilaPrioridadesEstatica.exe

clean:
	$(RM) $(OBJS) FilaPrioridadesEstatica.exe

clean-after:
	$(RM) $(OBJS)

FilaPrioridadesEstatica.exe: $(OBJS)
	$(CC) -Wall -s -o $@ $(OBJS) $(LIBS)

FilaPrioridade.o: FilaPrioridade.c FilaPrioridade.h
	$(CC) -Wall -s -c $< -o $@ $(CFLAGS)

Main.o: Main.c FilaPrioridade.h
	$(CC) -Wall -s -c $< -o $@ $(CFLAGS)

AppResource.res: AppResource.rc
	$(WINDRES) -i AppResource.rc -J rc -o AppResource.res -O coff

