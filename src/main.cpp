#include <iostream>
#include <string>
#include <sstream>

#include "carro.hpp"
#include "celular.hpp"
#include "livro.hpp"

#include "pizza.hpp"
#include "refrigerante.hpp"
#include "chocolate.hpp"

using namespace std;

void cadastrarProdutoMenu();
void cadastrarCarro();
void cadastrarCelular();
void cadastrarLivro();

void cadastrarPizza();
void cadastrarRefrigerante();
void cadastrarChocolate();

int main()
{
	string str;
	int opcao = 99;

	while (opcao != 0)
	{

		cout << "Escolha uma das opções abaixo: " << endl;
		cout << "1 - Adicionar produto" << endl;
		cout << "2 - Remover produto" << endl;
		cout << "3 - Informar a quantidade de produtos no depósito" << endl;
		cout << "4 - Informar se o depósito está vazio" << endl;
		cout << "5 - Informar o produto com o maior valor" << endl;
		cout << "0 - Sair" << endl;

		getline(cin, str);
		stringstream(str) >> opcao;

		switch (opcao)
		{
		case 1: //adicionar produto

			cadastrarProdutoMenu();

			break;

		case 2:
			cout << "" << endl;
			break;

		case 3:
			cout << "" << endl;
			break;

		case 4:
			cout << "" << endl;
			break;

		case 5:
			cout << "" << endl;
			break;

		case 0:
			cout << "Até logo!" << endl;
			break;

		default:
			cout << "Opção inválida." << endl;
			break;
		}
	}

	return 0;
}

void cadastrarProdutoMenu()
{
	int opcao = 99;
	int produtoDuravel = 99;
	int produtoNaoDuravel = 99;
	string str;

	cout << "O produto é durável(1) ou não durável(2)?" << endl;
	getline(cin, str);
	stringstream(str) >> opcao;

	switch (opcao)
	{
	case 1:
		cout << "Escolha o produto: " << endl;
		cout << "1 - Carro" << endl;
		cout << "2 - Celular" << endl;
		cout << "3 - Livro" << endl;

		getline(cin, str);
		stringstream(str) >> produtoDuravel;

		switch (produtoDuravel)
		{
		case 1: //cadastrar carro
			cadastrarCarro();
			break;
		case 2: //cadastrar celular
			cadastrarCelular();
			break;
		case 3: //cadastrar livro
			cadastrarLivro();
			break;
		default:
			cout << "Opção Inválida." << endl;
			break;
		}

		break;

	case 2:
		cout << "Escolha o produto: " << endl;
		cout << "1 - Pizza" << endl;
		cout << "2 - Chocolate" << endl;
		cout << "3 - Refrigerante" << endl;

		getline(cin, str);
		stringstream(str) >> produtoNaoDuravel;

		switch (produtoNaoDuravel)
		{
		case 1: //cadastrar pizza
			cadastrarPizza();
			break;
		case 2: //cadastrar chocolate
			cadastrarChocolate();
			break;
		case 3: //cadastrar refrigerante
			cadastrarRefrigerante();
			break;
		default:
			cout << "Opção Inválida." << endl;
			break;
		}

		break;

	default:
		cout << "Opção inválida." << endl;
		break;
	}
}

void cadastrarCarro()
{
	Carro *novoCarro = new Carro;

	string str, dadoDigitado;

	//modelo
	cout << "Digite o modelo do carro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCarro->setModelo(dadoDigitado);
	//cor
	cout << "Digite a cor do carro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCarro->setCor(dadoDigitado);
	//placa
	cout << "Digite a placa do carro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCarro->setPlaca(dadoDigitado);

	//materialPredominante
	cout << "Digite o material predominante do carro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCarro->setMaterialPredominante(dadoDigitado);
	//durabilidade
	cout << "Digite a durabiliade do carro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCarro->setDurabilidade(stoi(dadoDigitado));

	//nome
	cout << "Digite o nome do carro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCarro->setNome(dadoDigitado);
	//marca
	cout << "Digite a marca do carro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCarro->setMarca(dadoDigitado);
	//descricao
	cout << "Digite a descrição do carro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCarro->setDescricao(dadoDigitado);
	//dataFabricacao
	cout << "Digite a data de fabricação do carro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCarro->setDataFabricacao(dadoDigitado);

	//TODO: fazer o cast de carro pra produto e inserir na lista
}

void cadastrarCelular()
{
	Celular *novoCelular = new Celular;

	string str, dadoDigitado;

	//modelo
	cout << "Digite o modelo do Celular: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCelular->setModelo(dadoDigitado);
	//fabricante
	cout << "Digite o fabricante do Celular: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCelular->setFabricante(dadoDigitado);
	//armazenamento
	cout << "Digite o armazenamento do Celular: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCelular->setArmazenamento(stoi(dadoDigitado));

	//materialPredominante
	cout << "Digite o material predominante do Celular: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCelular->setMaterialPredominante(dadoDigitado);
	//durabilidade
	cout << "Digite a durabiliade do Celular: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCelular->setDurabilidade(stoi(dadoDigitado));

	//nome
	cout << "Digite o nome do Celular: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCelular->setNome(dadoDigitado);
	//marca
	cout << "Digite a marca do Celular: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCelular->setMarca(dadoDigitado);
	//descricao
	cout << "Digite a descrição do Celular: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCelular->setDescricao(dadoDigitado);
	//dataFabricacao
	cout << "Digite a data de fabricação do Celular: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoCelular->setDataFabricacao(dadoDigitado);

	//TODO: fazer o cast de Celular pra produto e inserir na lista
}

void cadastrarLivro()
{
	Livro *novoLivro = new Livro;

	string str, dadoDigitado;

	//titulo
	cout << "Digite o título do Livro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoLivro->setTitulo(dadoDigitado);
	//autor
	cout << "Digite o autor do Livro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoLivro->setAutor(dadoDigitado);
	//genero
	cout << "Digite o genero do Livro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoLivro->setGenero(dadoDigitado);
	//numPaginas
	cout << "Digite o número de paginas do Livro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoLivro->setNumPaginas(stoi(dadoDigitado));

	//materialPredominante
	cout << "Digite o material predominante do Livro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoLivro->setMaterialPredominante(dadoDigitado);
	//durabilidade
	cout << "Digite a durabiliade do Livro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoLivro->setDurabilidade(stoi(dadoDigitado));

	//nome
	cout << "Digite o nome do Livro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoLivro->setNome(dadoDigitado);
	//marca
	cout << "Digite a marca do Livro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoLivro->setMarca(dadoDigitado);
	//descricao
	cout << "Digite a descrição do Livro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoLivro->setDescricao(dadoDigitado);
	//dataFabricacao
	cout << "Digite a data de fabricação do Livro: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoLivro->setDataFabricacao(dadoDigitado);

	//TODO: fazer o cast de Livro pra produto e inserir na lista
}

void cadastrarChocolate()
{
	Chocolate *novoChocolate = new Chocolate;

	string str, dadoDigitado;

	//tipo
	cout << "Digite o tipo do Chocolate: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoChocolate->setTipo(dadoDigitado);
	//fabricante
	cout << "Digite fabricante do Chocolate: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoChocolate->setCor(dadoDigitado);

	//dataValidade
	cout << "Digite a data de validade do Chocolate: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoChocolate->setDataValidade(dadoDigitado);
	//genero
	cout << "Digite o genero do Chocolate: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoChocolate->setGenero();

	//nome
	cout << "Digite o nome do Chocolate: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoChocolate->setNome(dadoDigitado);
	//marca
	cout << "Digite a marca do Chocolate: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoChocolate->setMarca(dadoDigitado);
	//descricao
	cout << "Digite a descrição do Chocolate: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoChocolate->setDescricao(dadoDigitado);
	//dataFabricacao
	cout << "Digite a data de fabricação do Chocolate: " << endl;
	getline(cin, str);
	stringstream(str) >> dadoDigitado;
	novoChocolate->setDataFabricacao(dadoDigitado);

	//TODO: fazer o cast de Chocolate pra produto e inserir na lista
}