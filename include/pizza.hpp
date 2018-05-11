#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <iostream>
#include <string>
#include "produtoNaoDuravel.hpp"
using namespace std;

class Pizza : public ProdutoNaoDuravel {
	private:
		string sabor;
		int numFatias;

		void dadosPizza(istream &i);

	public:
		Pizza(string nome, string marca, string descricao, string dataFabricacao, double preco, 
				string dataValidade, string genero,
					string sabor, int numFatias);
	 	Pizza();
	 	~Pizza();

		void setSabor(string sabor);
		string getSabor();

		void setNumFatias(int numFatias);
		int getNumFatias();

		friend ostream& operator<< (ostream &o, Pizza const &_pizza);

		friend istream& operator>> (istream &i, Pizza &_pizza);

};

#endif