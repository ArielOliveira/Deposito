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

	public:
		Refrigerante(string sabor, double volume);
	  	Refrigerante();
	 	~Refrigerante();

		void setSabor(string sabor);
		string getSabor();

		void setVolume(double volume);
		double getVolume();

};

#endif