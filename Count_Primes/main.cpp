#include "bits.h"
#include <vector>
#include <iostream>

bool isPrime(int a)
{
	for (int i = 2; i <= (a / 2); i++)
	{
		//samo radimm funkciju da vidim da li nije prime, time je taj return true na kraju
		if (a % i == 0)
		{
			//ako je neki od brojeva izmedu 2 i pola od unesenog cjelobrojno djeljiv sa unesenimm brojem, time nije prime number, zato returnamo false
			return false;
		}
	}
	return true;
}

int main()
{
	std::cout << "Unesite manji, pa veci broj kao raspon u kojem zelis traziti prime brojeve" << std::endl;
	int range1 = 0, range2 = 0;
	std::cin >> range1;
	std::cin >> range2;
	std::cout << std::endl;
	std::vector<bool> theVector;

	for (int i = range1; i <= range2; i++)
	{
		theVector.push_back(isPrime(i));
	}

	for (int i = 0; i < (theVector.size()-1); i++)
	{
		if (theVector[i] == true)
		{
			std::cout << i+range1 << " je prime" << std::endl;
		}
		else
		{
			std::cout << i+range1 << " nije prime" << std::endl;
		}
	}
	
}

