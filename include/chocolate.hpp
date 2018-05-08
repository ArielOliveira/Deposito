#ifndef CHOCOLATE_HPP
#define CHOCOLATE_HPP

#include <iostream>
#include <string>
#include "produtoNaoDuravel.hpp"

class Chocolate : public ProdutoNaoDuravel {
	private:
		string tipo;
		string fabricante;

	public:
		Chocolate(string nome, string marca, string descricao, string dataFabricacao, double preco,
					string dataValidade, string genero, 
						string tipo, string fabricante);
	  	Chocolate();
	 	~Chocolate();

		void setTipo(string tipo);
		string getTipo();
		
		void setFabricante(string fabricante);
		string getFabricante();

};

#endif