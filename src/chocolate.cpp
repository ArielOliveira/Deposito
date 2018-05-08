#include "chocolate.hpp"

Chocolate::Chocolate(string tipo, string fabricante): 
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