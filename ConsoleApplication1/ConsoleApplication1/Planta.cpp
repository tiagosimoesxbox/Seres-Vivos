#include "Planta.h"

Planta::Planta(string nome, string fruto) : Ser(nome), fruto(fruto) {}

string Planta::getFruto()
{
	return fruto;
}

void Planta::setFruto(string fruto)
{
	this->fruto = fruto;
}

void Planta::operator=(Planta *p)
{
	setNome(p->getNome());
	setFruto(p->getFruto());
}

string Planta::toString()
{
	return getNome() + ", " + getFruto();
}

