all : dessine.o graphlib.o main.o
	 $(CC) -o main main.o graphlib.o dessine.o

main.o : main.c dessine.h graphlib.h
	 $(CC) -c $^ -Wall -lX11 –/usr/include/X11 -o main.o

dessine.o : dessine.c dessine.h graphlib.h
	 $(CC) -c $^ -Wall -lX11 –/usr/include/X11 -o dessine.o

graphlib.o : graphlib.c graphlib.h
	 $(CC) -c graphlib.c -Wall -lX11 –/usr/include/X11 -o graphlib.o