#include "livro.hpp"

Livro::Livro(string titulo, string autor, string genero, int numPaginas): 
				titulo(titulo), autor(autor), genero(genero), numPaginas(numPaginas) {}

Livro::Livro() {
	titulo = "";
	autor = "";
	genero = "";
	numPaginas = 0;
}

Livro::~Livro() {}

void Livro::setTitulo(string titulo) {this->titulo = titulo;}
string Livro::getTitulo() {return titulo;}

void Livro::setAutor(string autor) {this->autor = autor;}
string Livro::getAutor() {return autor;}

void Livro::setGenero(string genero) {this->genero = genero;}
string Livro::getGenero() {return genero;}

void Livro::setNumPaginas(int numPaginas) {this->numPaginas;}
int Livro::getNumPaginas() {return numPaginas;}