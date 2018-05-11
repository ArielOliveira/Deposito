#ifndef CELULAR_HPP
#define CELULAR_HPP

#include "produtoDuravel.hpp"

class Celular : public ProdutoDuravel {
	private:
		string modelo;
		string fabricante;

		int armazenamento;

		void dadosCelular(istream &i);

	public:
		Celular(string nome, string marca, string descricao, string dataFabricacao, double preco,
					string materialPredominante, int durabilidade,
						string modelo, string fabricante, int armazenamento);
	 	Celular();
	 	~Celular();

		void setModelo(string modelo);
		string getModelo();

		void setFabricante(string fabricante);
		string getFabricante();

		void setArmazenamento(int armazenamento);
		int getArmazenamento();

		friend ostream& operator<< (ostream &o, Celular const &_celular);

		friend istream& operator>> (istream &i, Celular &_celular);

};

#endif