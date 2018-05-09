#ifndef DEPOSITO_HPP
#define DEPOSITO_HPP

#include "lista.hpp"
#include "produto.hpp"

class Deposito {
	private:
		List<Produto> *l;

	public:
		Deposito();
		~Deposito();

		void adicionarProduto(Produto produto);
		void removerProduto(string nome);

		int produtosQuant();

		bool estaVazio();

		Produto produtoMaisCaro();
};

#endif