#include "Fungos.h"

Fungos::Fungos(string nome) : Ser(nome) {}

virtual string Fungos::toString() {
	return this->nome;	
}
