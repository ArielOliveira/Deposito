#include "produtoNaoDuravel.hpp"

ProdutoNaoDuravel::ProdutoNaoDuravel(string dataValidade, string genero) : dataValidade(dataValidade), genero(genero) {}

ProdutoNaoDuravel::ProdutoNaoDuravel()
{
    dataValidade = "";
    genero = "";
}

ProdutoNaoDuravel::~ProdutoNaoDuravel() {}

void ProdutoNaoDuravel::setDataValidade(string dataValidade) { this->dataValidade = dataValidade; }
string ProdutoNaoDuravel::getDataValidade() { return dataValidade; }

void ProdutoNaoDuravel::setGenero(string genero) { this->genero = genero; }
string ProdutoNaoDuravel::getGenero() { return genero; }
