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

		void dadosLivro(istream &i);
	public:
		Livro(string nome, string marca, string descricao, string dataFabricacao, double preco,
				string materialPredominante, int durabilidade, 
					string titulo, string autor, string genero, int numPaginas);
	 	Livro();
	 	~Livro();
		
		void setTitulo(string titulo);
		string getTitulo();

		void setAutor(string autor);
		string getAutor();

		void setGenero(string genero);
		string getGenero();

		void setNumPaginas(int numPaginas);
		int getNumPaginas();

		friend ostream& operator<< (ostream &o, Livro const &_livro);

		friend istream& operator>> (istream &i, Livro &_livro);
};

#endif