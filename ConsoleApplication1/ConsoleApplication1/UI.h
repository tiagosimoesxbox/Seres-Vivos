#pragma once
#include "Planta.h"
#include "Animal.h"

class UI {
	vector<Ser *> *seres;
	static int PLANTA, ANIMAL, FUNGO;
	bool interaccao();
	void mostraTodos();
	void inserirPlanta();
	void inserirAnimal();
	void inserirFungo();
public:
	UI();
	~UI();
	void start();
};
