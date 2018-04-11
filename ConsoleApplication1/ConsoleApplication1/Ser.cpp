#include "Ser.h"

Ser::Ser(string nome) : nome(nome), som("") {}
Ser::Ser(string nome, string som) : nome(nome), som(som) {}

string Ser::getNome()
{
	return nome;
}

string Ser::getSom()
{
	return som;
}

void Ser::setNome(string nome)
{
	this->nome = nome;
}

void Ser::setSom(string som)
{
	this->som = som;
}
