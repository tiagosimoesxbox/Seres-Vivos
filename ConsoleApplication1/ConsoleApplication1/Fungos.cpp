#include "Fungos.h"

Fungos::Fungos(string nome) : Ser(nome) {}

string Fungos::toString() {
	return this->getNome();	
}
