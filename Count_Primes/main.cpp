#include "bits.h"
#include <vector>
#include <iostream>

bool isPrime(int a)
{
	//std::vector<int> divisibles;

	for (int i = 2; i <= (a / 2); i++)
	{
		if (a % i == 0)
		{
			return false;
		}
		else
			return true;
	}
}

int main()
{
	std::cout << "Unesite broj kojeg zelis provjeriti da li je prime" << std::endl;
	int range1 = 0;
	std::cin >> range1;
	std::cout << std::endl;

	if (isPrime(range1))
	{
		std::cout << range1 << " je prime" << std::endl;
	}
	else
	{
		std::cout << range1 << " nije prime" << std::endl;
	}
}

