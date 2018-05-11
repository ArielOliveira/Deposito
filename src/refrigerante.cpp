#include "refrigerante.hpp"

#include <iostream>
#include <string>
using std::string;

Refrigerante::Refrigerante(string nome, string marca, string descricao, string dataFabricacao, double preco, 
								string dataValidade, string genero,
									string sabor, double volume) : 
										ProdutoNaoDuravel(nome, marca, descricao, dataFabricacao, preco, dataValidade, genero), 
											sabor(sabor), volume(volume) {}

Refrigerante::Refrigerante()
{
    sabor = "";
    volume = 0.0;
}

Refrigerante::~Refrigerante() {}

void Refrigerante::setSabor(string sabor) { this->sabor = sabor; }
string Refrigerante::getSabor() { return sabor; }

void Refrigerante::setVolume(double volume) { this->volume = volume; }
double Refrigerante::getVolume() { return volume; }

void Refrigerante::dadosRefrigerante(istream &i) {
	string valor;

	getline(i, valor, ';');
	sabor = valor;

	i >> volume;
	i.ignore();

}

ostream& operator<< (ostream &o, Refrigerante const &_refrigerante) {
	o << (Produto&)_refrigerante << endl
	  << (ProdutoNaoDuravel&)_refrigerante << endl
	  << _refrigerante.sabor << endl
	  << _refrigerante.volume << endl;

	return o;
}

istream& operator>> (istream &i, Refrigerante &_refrigerante) {
	_refrigerante.dadosProduto(i);
	_refrigerante.dadosValidade(i);
	_refrigerante.dadosRefrigerante(i);

	return i;
}

