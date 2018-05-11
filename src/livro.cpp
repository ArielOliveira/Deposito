#include "livro.hpp"

Livro::Livro(string nome, string marca, string descricao, string dataFabricacao, double preco,
				string materialPredominante, int durabilidade, 
					string titulo, string autor, string genero, int numPaginas): 
						ProdutoDuravel(nome, marca, descricao, dataFabricacao, preco, materialPredominante, durabilidade),
							titulo(titulo), autor(autor), genero(genero), numPaginas(numPaginas) {}

Livro::Livro() {
	titulo = "";
	autor = "";
	genero = "";
	numPaginas = 0;
}

Livro::~Livro() {}

void Livro::setTitulo(string titulo) {this->titulo = titulo;}
string Livro::getTitulo() {return titulo;}

void Livro::setAutor(string autor) {this->autor = autor;}
string Livro::getAutor() {return autor;}

void Livro::setGenero(string genero) {this->genero = genero;}
string Livro::getGenero() {return genero;}

void Livro::setNumPaginas(int numPaginas) {this->numPaginas = numPaginas;}
int Livro::getNumPaginas() {return numPaginas;}

void Livro::dadosLivro(istream &i) {
	string valor;

	getline(i, valor, ';');
	titulo = valor;

	getline(i, valor, ';');
	autor = valor;

	getline(i, valor, ';');
	genero = valor;

	i >> numPaginas;
	i.ignore();
}

ostream& operator<< (ostream &o, Livro const &_livro) {
	o << (Produto&)_livro << endl
	  << (ProdutoDuravel&)_livro << endl
	  << _livro.titulo << endl
	  << _livro.autor << endl
	  << _livro.genero << endl
	  << _livro.numPaginas << endl;

	return o;
}

istream& operator>> (istream &i, Livro &_livro) {
	_livro.dadosProduto(i);
	_livro.dadosDurabilidade(i);
	_livro.dadosLivro(i);

	return i;
}