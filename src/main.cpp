#include <iostream>

#include "lista.hpp"
#include "carro.hpp"

int main() {
	List<Carro> *l = new List<Carro>();

	l->insertAtHead(Carro("carro", "eita", "qlrcoisa", "fudeu", 33.32, "string", 1, "chevett", "azul", "xibata"));

	l->removeAt(1);
	
	l->printList();


	return 0;
}