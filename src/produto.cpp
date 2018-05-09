#include "produto.hpp"

Produto::Produto(string nome, string marca, string descricao, string dataFabricacao, double preco): 
					nome(nome), marca(marca), descricao(descricao), dataFabricacao(dataFabricacao), preco(preco) {}

Produto::Produto() {
	nome = "";
	marca = "";
	descricao = "";
	dataFabricacao = "";
	preco = 0;
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

ostream& operator<< (ostream &o, Produto const _produto) {
	o << _produto.nome << endl
	  << _produto.marca << endl	
	  << _produto.descricao << endl
	  << _produto.dataFabricacao << endl
	  << _produto.preco << endl;

	return o;
}

istream& operator>> (istream &i, Produto &_produto) {
	//i >> _produto.nome;
	//i.ignore();
	i >> _produto.marca;
	i.ignore();
	i >> _produto.descricao;
	i.ignore();
	i >> _produto.dataFabricacao;
	i.ignore();
	i >> _produto.preco;
	i.ignore();

	return i;
}

