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

	public:
		string getSabor();
		int getNumFatias();
		void setSabor(string sabor);
		void setNumFatias(int numFatias);
	 	Pizza();
	 	~Pizza();

};

#endif