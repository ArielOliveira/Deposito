#include "carro.hpp"

Carro::Carro(string nome, string marca, string descricao, string dataFabricacao, double preco,
				string materialPredominante, int durabilidade, 
					string modelo, string cor, string placa) : 
						ProdutoDuravel(nome, marca, descricao, dataFabricacao, preco, materialPredominante, durabilidade), 
							modelo(modelo), cor(cor), placa(placa) {}

Carro::Carro() {
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