#include "Animal.h"

Animal::Animal(string nome, int peso, string som) : Ser(nome) {
	this->peso = peso;
	this->som = som;
}

int Animal::getPeso() {
	return peso;
}

void Animal::setPeso(int peso) {
	this->peso = peso;
}

string Animal::getSom() {
	return som;
}

string Animal::toString() {
	return getNome() + ", " + to_string(getPeso()) + ", " + getSom();
}