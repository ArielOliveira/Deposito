#include "celular.hpp"

#include <iostream>
#include <string>
using std::string;

Celular::Celular(string modelo, string fabricante) : modelo(modelo), fabricante(fabricante) {}

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
