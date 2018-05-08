#ifndef CELULAR_HPP
#define CELULAR_HPP

#include <string>
using std::string;

#include "produtoDuravel.hpp"

class Celular : public ProdutoDuravel {
	private:
		string modelo;
		string fabricante;

		int armazenamento;

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

};

#endif