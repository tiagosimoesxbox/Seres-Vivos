#pragma once
#include "Ser.h"

class Planta : public Ser {
	string fruto;
public:
	Planta(string nome, string fruto);
	string getFruto();
	void setFruto(string fruto);

	void operator=(Planta *p);
	string toString();
};

