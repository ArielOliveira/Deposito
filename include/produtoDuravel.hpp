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
		ProdutoDuravel(string materialPredominante, int durabilidade);
	 	ProdutoDuravel();
	 	~ProdutoDuravel();

		void setDurabilidade(int durabilidade);
		int getDurabilidade();

		void setMaterialPredominante(string materialPredominante);
		string getMaterialPredominante();

};

#endif