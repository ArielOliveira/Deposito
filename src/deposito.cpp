#include "deposito.hpp"

Deposito::Deposito() {
	l = new List<Produto>();
}

Deposito::~Deposito() {
	delete l;
}

void Deposito::adicionarProduto(Produto produto) {
	l->insertAtTail(produto);
}

void Deposito::removerProduto(string nome) {
	int i = 1;
	while(l->getData(i).getNome() != nome) i++;

	l->removeAt(i-1);
}

int Deposito::produtosQuant() {return l->getSize();}

bool Deposito::estaVazio() {return (l->getSize() > 0) ? true : false;}

Produto Deposito::produtoMaisCaro() {
	Produto produto = l->getData(1);
	
	for (int i = 2; produto.getPreco() < l->getData(i).getPreco(); i++)
		produto = l->getData(i);

	return produto;
}