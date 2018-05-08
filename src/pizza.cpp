#include "pizza.hpp"

Pizza::Pizza(string sabor, int numFatias): 
	sabor(sabor), numFatias(numFatias) {}

Pizza::Pizza() {
	sabor = "";
	numFatias = 0;
}

Pizza::~Pizza() {}


void Pizza::setSabor(string sabor) {this->sabor = sabor;}
string Pizza::getSabor() {return sabor;}

void Pizza::setNumFatias(int numFatias) {this->numFatias = numFatias;}
int Pizza::getNumFatias() {return numFatias;}

