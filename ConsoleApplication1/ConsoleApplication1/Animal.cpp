#include "Animal.h"

Animal::Animal(string nome, int peso, string som) : Ser(nome, som) {
	this->peso = peso;
}

int Animal::getPeso() {
	return peso;
}

void Animal::setPeso(int peso) {
	this->peso = peso;
}

string Animal::toString() {
	return getNome() + ", " + to_string(getPeso()) + ", " + getSom();
}