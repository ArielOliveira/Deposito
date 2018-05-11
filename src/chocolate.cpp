#include "chocolate.hpp"

Chocolate::Chocolate(string nome, string marca, string descricao, string dataFabricacao, double preco,
						string dataValidade, string genero, 
							string tipo, string fabricante): 
								ProdutoNaoDuravel("Chocolate", marca, descricao, dataFabricacao, preco, dataValidade, genero), 
									tipo(tipo), fabricante(fabricante) {}

Chocolate::Chocolate() {
	tipo = "";
	fabricante = "";
}

Chocolate::~Chocolate() {}

void Chocolate::setTipo(string tipo) {this->tipo = tipo;}
string Chocolate::getTipo() {return tipo;}
		
void Chocolate::setFabricante(string fabricante) {this->fabricante = fabricante;}
string Chocolate::getFabricante() {return fabricante;}

void Chocolate::dadosChocolate(istream &i) {
	string valor;

	getline(i, valor, ';');
	tipo = valor;

	getline(i, valor, ';');
	fabricante = valor;
}

ostream& operator<< (ostream &o, Chocolate const &_chocolate) {
	o << (ProdutoNaoDuravel&)_chocolate << endl
	  << _chocolate.tipo << endl
	  << _chocolate.fabricante << endl;

	return o;
}

istream& operator>> (istream &i, Chocolate &_chocolate) {
	_chocolate.dadosProduto(i);
	_chocolate.dadosValidade(i);
	_chocolate.dadosChocolate(i);

	return i;
}