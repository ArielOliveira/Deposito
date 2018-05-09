#ifndef PRODUTO_DURAVEL_HPP
#define PRODUTO_DURAVEL_HPP

#include "produto.hpp"

class ProdutoDuravel : public Produto {
	protected:
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

		friend ostream& operator<< (ostream &o, ProdutoDuravel const _produtoDuravel);

		friend istream& operator>> (istream &i, ProdutoDuravel &_produtoDuravel);
};

#endif