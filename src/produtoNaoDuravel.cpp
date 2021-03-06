#include "produtoNaoDuravel.hpp"

ProdutoNaoDuravel::ProdutoNaoDuravel(string nome, string marca, string descricao, string dataFabricacao, double preco, 
										string dataValidade, string genero) : 
											Produto(nome, marca, descricao, dataFabricacao, preco), 
												dataValidade(dataValidade), genero(genero) {}

ProdutoNaoDuravel::ProdutoNaoDuravel() : Produto()
{
    dataValidade = "";
    genero = "";
}

ProdutoNaoDuravel::~ProdutoNaoDuravel() {}

void ProdutoNaoDuravel::setDataValidade(string dataValidade) { this->dataValidade = dataValidade; }
string ProdutoNaoDuravel::getDataValidade() { return dataValidade; }

void ProdutoNaoDuravel::setGenero(string genero) { this->genero = genero; }
string ProdutoNaoDuravel::getGenero() { return genero; }

void ProdutoNaoDuravel::dadosValidade(istream &i) {
	string valor;

	getline(i, valor, ';');
	dataValidade = valor;

	getline(i, valor, ';');
	genero = valor;
}

ostream& operator<< (ostream &o, ProdutoNaoDuravel const _produtoNaoDuravel) {
	o << (Produto)_produtoNaoDuravel << endl
	  << _produtoNaoDuravel.dataValidade << endl
	  << _produtoNaoDuravel.genero << endl;

	return o;
}
