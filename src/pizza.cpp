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

void Pizza::dadosPizza(istream &i) {
	string valor;

	getline(i, valor, ';');
	sabor = valor;

	i >> numFatias;
	i.ignore();
}

ostream& operator<< (ostream &o, Pizza const &_pizza) {
	o << (ProdutoNaoDuravel&)_pizza << endl
	  << (Produto&)_pizza << endl
	  << _pizza.sabor << endl
	  << _pizza.numFatias << endl;

	return o;
}

istream& operator>> (istream &i, Pizza &_pizza) {
	_pizza.dadosProduto(i);
	_pizza.dadosValidade(i);
	_pizza.dadosPizza(i);

	return i;
}

