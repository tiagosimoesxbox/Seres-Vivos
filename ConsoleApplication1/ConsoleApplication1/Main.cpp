#pragma once
#include "UI.h"

int main()
{
	UI *ui = new UI();
	ui->start();

	delete ui;
	return 0;
}