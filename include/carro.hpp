#ifndef CARRO_HPP
#define CARRO_HPP

#include <iostream>
#include <string>
#include "produtoDuravel.hpp"

class Carro : public ProdutoDuravel {
	private:
		string modelo;
		string cor;
		string placa;

	public:
		string getModelo();
		string getPlaca();
		string getCor();
		void setModelo(string modelo);
		void setPlaca(string placa);
		void setCor(string cor);
	 	Carro();
	 	~Carro();

};

#endif