#ifndef CHOCOLATE_HPP
#define CHOCOLATE_HPP

#include <iostream>
#include <string>
#include "produtoNaoDuravel.hpp"
using namespace std;

class Chocolate : public ProdutoNaoDuravel {
	private:
		string tipo;
		string fabricante;

	public:
		string getTipo();
		string getFabricante();
		void setTipo(string tipo);
		void setFabricante(string fabricante);
	  	Chocolate();
	 	~Chocolate();

};

#endif