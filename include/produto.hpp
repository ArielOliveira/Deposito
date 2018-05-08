#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <iostream>
#include <string>
using namespace std;

class Produto{
	private:
		string nome;
		double preco;
		string marca;
		string descricao;
		string dataFabricacao;

	public:
		string getNome();
		double getPreco();
		string getMarca();
		string getDescricao();
		string getDataFabricacao();
		void setNome(string nome);
		void setPreco(double preco);
		void setMarca(string marca);
		void setDescricao(string descricao);
		void setDataFabricacao(string dataFabricacao);
	 	Produto();
	 	~Produto();

};

#endif