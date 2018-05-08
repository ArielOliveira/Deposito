#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <iostream>
using std::endl;

#include <string>
using std::string;

#include <ostream>
using std::ostream;

class Produto {
	private:
		string nome;
		string marca;
		string descricao;
		string dataFabricacao;

		double preco;
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

		friend ostream& operator<< (ostream &o, Produto const _produto);
};


#endif