#ifndef PRODUTO_NAO_DURAVEL_HPP
#define PRODUTO_NAO_DURAVEL_HPP

#include <iostream>
#include <string>
#include "produto.hpp"
using namespace std;

class ProdutoNaoDuravel : public Produto {
	private:
		string dataValidade;
		string genero;

	public:
		string getDataValidade();
		int getGenero();
		void setDataValidade(string dataValidade);
		void setGenero(int genero);
	 	ProdutoNaoDuravel();
	 	~ProdutoNaoDuravel();

};

#endif