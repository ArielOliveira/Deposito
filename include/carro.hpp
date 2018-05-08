#ifndef CARRO_HPP
#define CARRO_HPP

#include <iostream>
#include <string>
#include "produtoDuravel.hpp"

class Carro : public ProdutoDuravel {
	private:
		string modelo;
		string cor;
		string placa;

	public:
		Carro(string nome, string marca, string descricao, string dataFabricacao, double preco, 
				string materialPredominante, int durabilidade,
					string modelo, string cor, string placa);
	 	Carro();
	 	~Carro();

		void setModelo(string modelo);
		string getModelo();

		void setPlaca(string placa);
		string getPlaca();

		void setCor(string cor);
		string getCor();

};

#endif