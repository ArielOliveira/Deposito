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
		Carro(string modelo, string cor, string placa);
	 	Carro();
	 	~Carro();

		void setModelo(string modelo);
		string getModelo();

		void setPlaca(string placa);
		string getPlaca();

		void setCor(string cor);
		string getCor();

};

#endif