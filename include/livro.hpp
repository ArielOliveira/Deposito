#ifndef LIVRO_HPP
#define LIVRO_HPP

#include <iostream>
#include <string>
#include "produtoDuravel.hpp"
using namespace std;

class Livro : public ProdutoDuravel {
	private:
		string titulo;
		string autor;
		string genero;
		int numPaginas;

	public:
		string getTitulo();
		string getAutor();
		string getGenero();
		int getNumPaginas();
		void setTitulo(string titulo);
		void setAutor(string autor);
		void setGenero(string genero);
		void setNumPaginas(int numPaginas);
	 	Livro();
	 	~Livro();

};

#endif