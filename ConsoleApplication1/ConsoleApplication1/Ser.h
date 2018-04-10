#pragma once
#include "Headers.h"

class Ser {
	string nome, som;
public:
	Ser(string nome);
	string getNome();
	string getSom();
	void setNome(string nome);
	void setSom(string som);
	virtual string toString() = 0;
};