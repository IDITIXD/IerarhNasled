// NECHET.h
#pragma once

#include <iostream>
#include <iomanip>
#include "MASSIV.h"
using namespace std;
class NECHET : public MASSIV
{
public:
	NECHET();
	~NECHET() { delete[] vec; }

	int GetN() { return n; }
	int* GetVec() { return vec; }
	int CountSum();
	void Show();

private:
	int n;
	int* vec;
};
