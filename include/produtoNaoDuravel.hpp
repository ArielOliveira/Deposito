#ifndef PRODUTO_NAO_DURAVEL_HPP
#define PRODUTO_NAO_DURAVEL_HPP

#include <string>
using std::string;

#include <ostream>
using std::ostream;

#include "produto.hpp"


class ProdutoNaoDuravel : public Produto {
	private:
		string dataValidade;
		string genero;

	public:
		ProdutoNaoDuravel(string nome, string marca, string descricao, string dataFabricacao, double preco, 
							string dataValidade, string genero);
	 	ProdutoNaoDuravel();
	 	~ProdutoNaoDuravel();

		void setDataValidade(string dataValidade);
		string getDataValidade();

		void setGenero(string genero);
		string getGenero();
		
		friend ostream& operator<< (ostream &o, ProdutoNaoDuravel const _produtoNaoDuravel);
};

#endif