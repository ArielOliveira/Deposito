#ifndef REFRIGERANTE_HPP
#define REFRIGERANTE_HPP

#include <iostream>
#include <string>
#include "produtoNaoDuravel.hpp"
using namespace std;

class Refrigerante : public ProdutoNaoDuravel {
	private:
		string sabor;
		double volume;

		void dadosRefrigerante(istream &i);

	public:
		Refrigerante(string nome, string marca, string descricao, string dataFabricacao, double preco, 
						string dataValidade, string genero,
							string sabor, double volume);
	  	Refrigerante();
	 	~Refrigerante();

		void setSabor(string sabor);
		string getSabor();

		void setVolume(double volume);
		double getVolume();

		friend ostream& operator<< (ostream &o, Refrigerante const &_refrigerante);

		friend istream& operator>> (istream &i, Refrigerante &_refrigerante);

};

#endif