#include "produtoDuravel.hpp"

ProdutoDuravel::ProdutoDuravel(string nome, string marca, string descricao, string dataFabricacao, double preco,
								string materialPredominante, int durabilidade) :
									Produto(nome, marca, descricao, dataFabricacao, preco),
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

ostream& operator<< (ostream &o, ProdutoDuravel const &_produtoDuravel) {
	o << (Produto&)_produtoDuravel << endl
	  << _produtoDuravel.materialPredominante << endl
	  << _produtoDuravel.durabilidade << endl;	

	return o;
}

void ProdutoDuravel::dadosDurabilidade(istream &i) {
	string valor;

	getline(i, valor, ';');
	materialPredominante = valor;
	
	i >> durabilidade;
	i.ignore();
}