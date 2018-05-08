#include "produtoDuravel.hpp"

ProdutoDuravel::ProdutoDuravel(string nome, string marca, string descricao, string dataFabricacao, double preco,
								string materialPredominante, int durabilidade) :
									Produto(nome, marca, descricao, dataFabricacao, preco) {}

ProdutoDuravel::ProdutoDuravel() {
	materialPredominante = "";
	durabilidade = 0;
}

ProdutoDuravel::~ProdutoDuravel() {}

void ProdutoDuravel::setMaterialPredominante(string materialPredominante) {this->materialPredominante = materialPredominante;}
string ProdutoDuravel::getMaterialPredominante() {return materialPredominante;}
		
void ProdutoDuravel::setDurabilidade(int durabilidade) {this->durabilidade = durabilidade;}
int ProdutoDuravel::getDurabilidade() {return durabilidade;}