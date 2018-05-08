#ifndef CELULAR_HPP
#define CELULAR_HPP

#include <iostream>
#include <string>
#include "produtoDuravel.hpp"
using namespace std;

class Celular : public ProdutoDuravel {
	private:
		string modelo;
		string fabricante;
		int armazenamento;

	public:
		string getModelo();
		string getFabricante();
		int getArmazenamento();
		void setModelo(string modelo);
		void setFabricante(string fabricante);
		void setArmazenamento(int armazenamento);
	 	Celular();
	 	~Celular();

};

#endif