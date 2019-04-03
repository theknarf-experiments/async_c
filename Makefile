CXX=cc
FLAGS=-Isrc -Iexamples

all: simple

simple: examples/simple.c src/async.h
	mkdir -p bin
	$(CXX) $(FLAGS) examples/simple.c -o bin/simple
