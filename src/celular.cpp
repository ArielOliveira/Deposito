#include "celular.hpp"

Celular::Celular(string modelo, string fabricante, int armazenamento) : 
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
