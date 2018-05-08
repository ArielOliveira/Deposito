#ifndef PRODUTO_DURAVEL_HPP
#define PRODUTO_DURAVEL_HPP

#include <iostream>
#include <string>
#include "produto.hpp"
using namespace std;

class ProdutoDuravel : public Produto {
	private:
		string materialPredominante;
		int durabilidade;

	public:
		string getMaterialPredominante();
		int getDurabilidade();
		void setMaterialPredominante(string materialPredominante);
		void setDurabilidade(int durabilidade);
	 	ProdutoDuravel();
	 	~ProdutoDuravel();

};

#endif