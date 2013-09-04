CC = gcc -Wall -pedantic

all: main main_test
	
main: main.c
	$(CC) main.c graphics.c -o main -lGL -lGLU `sdl-config --cflags --libs` --std=c99

main_test: main_test.c
	$(CC) main_test.c graphics.c -o main_test -lGL -lGLU `sdl-config --cflags --libs` --std=c99


clean:
	@echo Cleaning up...
	@rm main main_test
	@echo Done.
