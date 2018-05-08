lista = ./bin/lista

CC = g++

CPPFLAGS = -Wall -pedantic -ansi -std=c++11

OBJS = ./build/main.o ./build/produto.o

lista: $(lista)

$(lista): CPPFLAGS += -I. -I./include/
$(lista): $(OBJS)
	$(CC) $^ $(CPPFLAGS) -o $@

./build/main.o: ./src/main.cpp ./include/lista.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

./build/produto.o: ./src/produto.cpp ./include/produto.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

dir:
	mkdir -p bin
	mkdir -p build
	mkdir -p data
	mkdir -p include
	mkdir -p src
	mkdir -p doc
	mkdir -p lib
	mkdir -p test
	
	
