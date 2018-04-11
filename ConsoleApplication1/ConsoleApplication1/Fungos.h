#pragma once
#include "Ser.h"
class Fungos : public Ser {
public:
	Fungos(string nome);
	virtual string toString() = 0;
};
