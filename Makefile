lista = ./bin/lista

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin
DOC_DIR = ./doc
LIB_DIR = ./lib

CC = g++

CPPFLAGS = -Wall -pedantic -ansi -std=c++11

OBJS = ./build/main.o ./build/deposito.o ./build/produto.o ./build/produtoDuravel.o ./build/produtoNaoDuravel.o ./build/carro.o ./build/celular.o ./build/chocolate.o ./build/livro.o ./build/pizza.o ./build/refrigerante.o

RM = rm -rf

lista: $(lista)

$(lista): CPPFLAGS += -I. -I./include/
$(lista): $(OBJS)
	$(CC) $^ $(CPPFLAGS) -o $@

./build/main.o: ./src/main.cpp ./include/lista.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

./build/deposito.o: ./src/deposito.cpp ./include/deposito.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

./build/produto.o: ./src/produto.cpp ./include/produto.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

./build/produtoDuravel.o: ./src/produtoDuravel.cpp ./include/produtoDuravel.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

./build/produtoNaoDuravel.o: ./src/produtoNaoDuravel.cpp ./include/produtoNaoDuravel.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

./build/carro.o: ./src/carro.cpp ./include/carro.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

./build/celular.o: ./src/celular.cpp ./include/celular.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

./build/chocolate.o: ./src/chocolate.cpp ./include/chocolate.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

./build/livro.o: ./src/livro.cpp ./include/livro.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

./build/pizza.o: ./src/pizza.cpp ./include/pizza.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@

./build/refrigerante.o: ./src/refrigerante.cpp ./include/refrigerante.hpp
	$(CC) -c $(CPPFLAGS) $<	-o $@


debug: CPPFLAGS += -g -O0
debug: lista

dir:
	mkdir -p bin
	mkdir -p build
	mkdir -p data
	mkdir -p include
	mkdir -p src
	mkdir -p doc
	mkdir -p lib
	mkdir -p test

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*

	
	
