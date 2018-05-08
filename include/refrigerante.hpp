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
		string getSabor();
		double getVolume();
		void setSabor(string sabor);
		void setVolume(double volume);
	  	Refrigerante();
	 	~Refrigerante();

};

#endif