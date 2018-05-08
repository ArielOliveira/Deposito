#include "produto.hpp"

Produto::Produto() {
	nome = "";
	preco = 0;
	marca = "";
	descricao = "";
	dataFabricacao = "";
}

Produto::~Produto() {}

void Produto::setNome(string nome) {this->nome = nome;}
string Produto::getNome() {return nome;}

void Produto::setPreco(double preco) {this->preco = preco;}
double Produto::getPreco() {return preco;}
		
void Produto::setMarca(string marca) {this->marca = marca;}
string Produto::getMarca() {return marca;}

void Produto::setDescricao(string descricao) {this->descricao = descricao;}
string Produto::getDescricao() {return descricao;}

void Produto::setDataFabricacao(string dataFabricacao) {this->dataFabricacao = dataFabricacao;}
string Produto::getDataFabricacao() {return dataFabricacao;}