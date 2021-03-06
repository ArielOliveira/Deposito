#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <iostream>
using std::endl;

#include <string>
using std::string;

#include <ostream>
using std::ostream;

#include <istream>
using std::istream;

class Produto {
	protected:
		string nome;
		string marca;
		string descricao;
		string dataFabricacao;

		double preco;

		void dadosProduto(istream &i);
	public:
		Produto(string nome, string marca, string descricao, string dataFabricacao, double preco);
	 	Produto();
	 	~Produto();

		void setNome(string nome);
		string getNome();

		void setPreco(double preco);
		double getPreco();
		
		void setMarca(string marca);
		string getMarca();

		void setDescricao(string descricao);
		string getDescricao();

		void setDataFabricacao(string dataFabricacao);
		string getDataFabricacao();

		friend ostream& operator<< (ostream &o, Produto const &_produto);

		friend istream& operator>> (istream &i, Produto &_produto);
};


#endif