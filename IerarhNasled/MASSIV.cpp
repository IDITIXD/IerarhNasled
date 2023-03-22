// MASSIV.cpp
#include "MASSIV.h"

int MASSIV::CountSum()
{
	int sum = 0;
	for (int i = 0; i < n; i++)sum += mas[i];
	return sum;
}

void MASSIV::Show()
{
	cout << "ÌÀÑÑÈÂ\n--------\n";

	for (int i = 0; i < n; i++)
	{
		if (i && !(i % 10)) cout << "\n";
		cout << setw(4) << mas[i];
	}

	cout << "\n";
}
