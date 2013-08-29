CC = gcc -Wall -pedantic

all:
	$(CC) main.c graphics.c -o main -lGL -lGLU `sdl-config --cflags --libs` --std=c99

clean:
	@echo Cleaning up...
	@rm lesson05
	@echo Done.
