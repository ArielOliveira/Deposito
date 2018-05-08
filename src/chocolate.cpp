#include "chocolate.hpp"

Chocolate::Chocolate(string nome, string marca, string descricao, string dataFabricacao, double preco,
						string dataValidade, string genero, 
							string tipo, string fabricante): 
								ProdutoNaoDuravel(nome, marca, descricao, dataFabricacao, preco, dataValidade, genero), 
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