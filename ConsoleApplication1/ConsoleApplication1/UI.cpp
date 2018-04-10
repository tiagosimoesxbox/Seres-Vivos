#include "UI.h"

void UI::interaccao()
{
	int opcao;
	cout << endl << endl;
	cout << "---------- SERES VIVOS -----------" << endl;
	cout << "(1) - Inserir planta" << endl;
	cout << "(2) - Inserir animal" << endl;
	cout << "(0) - Todos os seres" << endl;
	cout << "----------------------------------" << endl << endl << "> ";
	cin >> opcao;

	if (opcao == 0)
		mostraTodos();
	else if (opcao == 1)
		inserirPlanta();
	else
		inserirAnimal();
}

void UI::mostraTodos() {
	int i = 0;
	for (auto it = seres->begin(); it != seres->end(); it++, i++)
		cout << "Ser [" << i << "] = " << (*it)->toString() << endl;
}

void UI::inserirPlanta()
{
	string nome = "PLANTA " + to_string(PLANTA++);
	seres->push_back(new Planta(nome, "?"));
}

void UI::inserirAnimal()
{
	string nome = "ANIMAL " + to_string(ANIMAL++);
	seres->push_back(new Animal(nome, 0, "?"));
}

int UI::PLANTA = 0;
int UI::ANIMAL = 0;
UI::UI()
{
	seres = new vector<Ser *>();

	seres->push_back(new Planta("Laranjeira", "Laranja"));
	seres->push_back(new Planta("Macieira", "Maca"));

	seres->push_back(new Animal("Cao", 10, "Ao ao"));
	seres->push_back(new Animal("Gato", 5, "Miau"));
}

UI::~UI()
{
	for (auto it = seres->begin(); it != seres->end(); it++)
		delete *it;
}

void UI::start()
{
	while (1) {
		interaccao();
	}
}
