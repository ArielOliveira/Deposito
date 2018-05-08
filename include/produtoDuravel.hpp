#ifndef PRODUTO_DURAVEL_HPP
#define PRODUTO_DURAVEL_HPP

#include "produto.hpp"

#include <string>
using std::string;

class ProdutoDuravel : public Produto {
	private:
		string materialPredominante;
		int durabilidade;

	public:
		ProdutoDuravel(string nome, string marca, string descricao, string dataFabricacao, double preco, 
						string materialPredominante, int durabilidade);
	 	ProdutoDuravel();
	 	~ProdutoDuravel();

		void setDurabilidade(int durabilidade);
		int getDurabilidade();

		void setMaterialPredominante(string materialPredominante);
		string getMaterialPredominante();

};

#endif