#ifndef CARRO_HPP
#define CARRO_HPP

#include "produtoDuravel.hpp"

class Carro : public ProdutoDuravel {
	private:
		string modelo;
		string cor;
		string placa;

		void dadosCarro(istream &i);

	public:
		Carro(string marca, string descricao, string dataFabricacao, double preco, 
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

		friend ostream& operator<< (ostream &o, Carro const &_carro);

		friend istream& operator>> (istream &i, Carro &_carro);
};

#endif