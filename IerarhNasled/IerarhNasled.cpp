// // main.cpp
#include <iostream>
#include "MASSIV.h"
#include "NECHET.h"
#include "SORT.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	// A
	SORT* sort = new SORT;
	sort->NECHET::MASSIV::Show();
	cout << "\nСОРТИРОВКА МАССИВА\n\n";
	sort->Puzyrek();
	sort->NECHET::MASSIV::Show();
	sort->NECHET::Show();
	cout << "\nСОРТИРОВКА НЕЧЕТНЫХ ПРОСТЫХ\n";
	sort->Vybor();
	sort->NECHET::Show();
	delete sort;
	//B
	MASSIV* mas = new MASSIV;
	delete mas;
	cout << "\n";
	return 0;
}
