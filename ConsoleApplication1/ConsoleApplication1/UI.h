#pragma once
#include "Planta.h"
#include "Animal.h"

class UI {
	vector<Ser *> *seres;
	static int PLANTA;
	static int ANIMAL;
	void interaccao();
	void mostraTodos();
	void inserirPlanta();
	void inserirAnimal();
public:
	UI();
	~UI();
	void start();
};
