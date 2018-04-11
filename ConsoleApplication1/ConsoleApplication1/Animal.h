#pragma once
#include "Ser.h"

class Animal : public Ser {
	int peso;
	string som;
public:
	Animal(string nome, int peso, string som);
	int getPeso();
	void setPeso(int peso);
	string toString();
};


