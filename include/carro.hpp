#ifndef CARRO_HPP
#define CARRO_HPP

#include <iostream>
#include <string>
#include "produtoDuravel.hpp"

#include <ostream>
using std::ostream;

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

		friend ostream& operator<< (ostream &o, Carro const _carro);
};

#endif