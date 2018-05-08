#include "celular.hpp"

Celular::Celular(string nome, string marca, string descricao, string dataFabricacao, double preco,
					string materialPredominante, int durabilidade,
						string modelo, string fabricante, int armazenamento) : 
							ProdutoDuravel(nome, marca, descricao, dataFabricacao, preco, materialPredominante, durabilidade),
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
