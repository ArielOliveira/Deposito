#include "pizza.hpp"

Pizza::Pizza(string nome, string marca, string descricao, string dataFabricacao, double preco, 
				string dataValidade, string genero,
					string sabor, int numFatias): 
						ProdutoNaoDuravel(nome, marca, descricao, dataFabricacao, preco, dataValidade, genero),
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

