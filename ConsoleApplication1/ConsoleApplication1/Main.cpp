#pragma once
#include "Headers.h"
#include "Ser.h"
#include "Planta.h"
#include "Animal.h"

int main()
{
	vector<Ser *> *seres = new vector<Ser *>();

	seres->push_back(new Planta("Laranjeira", "Laranja"));
	seres->push_back(new Planta("Macieira", "Maca"));

	seres->push_back(new Animal("Cao", 10, "Ao ao"));
	seres->push_back(new Animal("Gato", 5, "Miau"));

	int i = 1;
	for (auto it = seres->begin(); it != seres->end(); it++, i++)
		cout << "Ser [" << i << "] = " << (*it)->toString() << endl;
	for (auto it = seres->begin(); it != seres->end(); it++, i++)
		delete *it;

	delete seres;
	return 0;
}