#include "carro.hpp"

Carro::Carro(string marca, string descricao, string dataFabricacao, double preco,
				string materialPredominante, int durabilidade, 
					string modelo, string cor, string placa) :
						ProdutoDuravel("Carro", marca, descricao, dataFabricacao, preco, materialPredominante, durabilidade), 
							modelo(modelo), cor(cor), placa(placa) {}

Carro::Carro() {
	nome = "Carro";
	modelo = "";
	cor = "";
	placa = "";
}

Carro::~Carro() {}

void Carro::setModelo(string modelo) {this->modelo = modelo;}
string Carro::getModelo() {return modelo;}
		
void Carro::setCor(string cor) {this->cor = cor;}
string Carro::getCor() {return cor;}

void Carro::setPlaca(string placa) {this->placa = placa;}
string Carro::getPlaca() {return placa;}

ostream& operator<< (ostream &o, Carro const &_carro) {
	o << (ProdutoDuravel&)_carro << endl
	  << _carro.modelo << endl
	  << _carro.cor << endl
	  << _carro.placa << endl;

	return o;
}

void Carro::dadosCarro(istream &i) {
	string valor;

	getline(i, valor, ';');
	modelo = valor;
	
	getline(i, valor, ';');
	cor = valor;

	getline(i, valor, ';');
	placa = valor;
}

istream& operator>> (istream &i, Carro &_carro) {
	_carro.dadosProduto(i);
	_carro.dadosDurabilidade(i);
	_carro.dadosCarro(i);

	return i;
}