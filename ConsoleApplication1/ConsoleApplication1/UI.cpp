#include "UI.h"
#include "Fungos.h"

bool UI::interaccao()
{
	int opcao;
	cout << endl << endl;
	cout << "---------- SERES VIVOS -----------" << endl;
	cout << "(1) - Inserir planta" << endl;
	cout << "(2) - Inserir animal" << endl;
	cout << "(3) - Inserir fungo" << endl;
	cout << "(0) - Todos os seres" << endl;
	cout << "(-1) - SAIR" << endl;
	cout << "----------------------------------" << endl << endl << "> ";
	cin >> opcao;

	switch (opcao) {
		case -1:
			return true;
			break;
		case 0:
			mostraTodos();
			break;
		case 1:
			inserirPlanta();
			break;
		case 2:
			inserirAnimal();
			break;
		case 3:
			inserirFungo();
			break;
		default:
			break;
	}
	return false;
}


void UI::inserirFungo() {
	string nome = "FUNGO " + to_string(FUNGO++);
	seres->push_back(new Fungos(nome));
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
int UI::FUNGO = 0;
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
		if (interaccao())
			break;
	}
}
