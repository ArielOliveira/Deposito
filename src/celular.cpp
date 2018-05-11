#include "celular.hpp"

Celular::Celular(string nome, string marca, string descricao, string dataFabricacao, double preco,
				 string materialPredominante, int durabilidade,
				 string modelo, string fabricante, int armazenamento) : ProdutoDuravel("Celular", marca, descricao, dataFabricacao, preco, materialPredominante, durabilidade),
																		modelo(modelo), fabricante(fabricante), armazenamento(armazenamento) {}

Celular::Celular()
{
	modelo = "";
	fabricante = "";
}

Celular::~Celular() {}

void Celular::setModelo(string modelo) { this->modelo = modelo; }
string Celular::getModelo() { return modelo; }

void Celular::setFabricante(string fabricante) { this->fabricante = fabricante; }
string Celular::getFabricante() { return fabricante; }

void Celular::setArmazenamento(int armazenamento) { this->armazenamento = armazenamento; }
int Celular::getArmazenamento() { return armazenamento; }

void Celular::dadosCelular(istream &i) {
	string valor;

	getline(i, valor, ';');
	modelo = valor;

	getline(i, valor, ';');
	fabricante = valor;
}

ostream& operator<< (ostream &o, Celular const &_celular) {
	o << (ProdutoDuravel&)_celular << endl
	  << _celular.modelo << endl
	  << _celular.fabricante << endl;

	return o;
}

istream& operator>> (istream &i, Celular &_celular) {
	_celular.dadosProduto(i);
	_celular.dadosDurabilidade(i);
	_celular.dadosCelular(i);
	
	return i;
}
