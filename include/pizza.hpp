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
		Pizza(string sabor, int numFatias);
	 	Pizza();
	 	~Pizza();

		void setSabor(string sabor);
		string getSabor();

		void setNumFatias(int numFatias);
		int getNumFatias();

};

#endif