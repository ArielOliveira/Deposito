#include "produtoDuravel.hpp"

ProdutoDuravel::ProdutoDuravel(string materialPredominante, int durabilidade):
								materialPredominante(materialPredominante), durabilidade(durabilidade) {}

ProdutoDuravel::ProdutoDuravel() {
	materialPredominante = "";
	durabilidade = 0;
}

ProdutoDuravel::~ProdutoDuravel() {}

void ProdutoDuravel::setMaterialPredominante(string materialPredominante) {this->materialPredominante = materialPredominante;}
string ProdutoDuravel::getMaterialPredominante() {return materialPredominante;}
		
void ProdutoDuravel::setDurabilidade(int durabilidade) {this->durabilidade = durabilidade;}
int ProdutoDuravel::getDurabilidade() {return durabilidade;}