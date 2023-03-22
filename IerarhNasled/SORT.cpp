// SORT.cpp
#include "SORT.h"

void SORT::Puzyrek()
{
	for (int i = 0; i < NECHET::MASSIV::GetN() - 1; i++)
	{
		for (int j = 0; j < NECHET::MASSIV::GetN() - i - 1; j++)
		{
			if (NECHET::MASSIV::GetMas()[j] > NECHET::MASSIV::GetMas()[j + 1])
			{
				int a = NECHET::MASSIV::GetMas()[j];
				NECHET::MASSIV::GetMas()[j] = NECHET::MASSIV::GetMas()[j + 1];
				NECHET::MASSIV::GetMas()[j + 1] = a;
			}
		}
	}
}

void SORT::Vybor()
{
	for (int i = 0; i < NECHET::GetN() - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < NECHET::GetN(); ++j)
		{
			if (NECHET::GetVec()[j] < NECHET::GetVec()[min])
				min = j;
		}
		int a = NECHET::GetVec()[i];
		NECHET::GetVec()[i] = NECHET::GetVec()[min];
		NECHET::GetVec()[min] = a;
	}
}
