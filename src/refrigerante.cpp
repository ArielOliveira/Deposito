#include "refrigerante.hpp"

#include <iostream>
#include <string>
using std::string;

Refrigerante::Refrigerante(string sabor, double volume) : sabor(sabor), volume(volume) {}

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
