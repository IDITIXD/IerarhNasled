// NECHET.cpp
#include "NECHET.h"
using namespace std;
NECHET::NECHET()
{
	vec = new int[MASSIV::GetN()];
	n = 0;

	for (int i = 0; i < MASSIV::GetN(); i++)
	{
		if (MASSIV::GetMasElem(i) % 2)
		{
			bool prime = true;

			for (int j = 2; j < MASSIV::GetMasElem(i); j++)
			{
				if (!(MASSIV::GetMasElem(i) % j))
				{
					prime = false;
					break;
				}
			}

			if (prime)
			{
				vec[n] = MASSIV::GetMasElem(i);
				n++;
			}
		}
	}
}

int NECHET::CountSum()
{
	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += vec[i];

	return sum;
}

void NECHET::Show()
{
	cout << "мевермше опнярше\n--------\n";

	for (int i = 0; i < n; i++)
	{
		if (i && !(i % 10)) cout << "\n";
		cout << setw(4) << vec[i];
	}

	cout << "\n";
}
