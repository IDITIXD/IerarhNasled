// MASSIV.h
#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
class MASSIV
{
private:
	static const int n = 50;
	int mas[n];
public:
	MASSIV() { for (int i = 0; i < n; i++) mas[i] = rand() % 20; }
	~MASSIV() {}
	int GetN() { return n; }
	int* GetMas() { return mas; }
	int GetMasElem(int i) { return ((i >= 0 && i < n) ? mas[i] : 0); }
	int CountSum();
	void Show();


};
