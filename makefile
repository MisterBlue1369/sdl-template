CSRC= src/*.cc

CINCL= -Iincl
CINCL+= -Iscenes

CLIB= `sdl2-config --cflags --libs`
CLIB+= -lSDL2_image


all: compile run
compile:
	g++ -o bin/main ${CSRC} ${CINCL} ${CLIB}
run:
	bin/main
