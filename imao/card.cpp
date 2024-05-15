#include "card.hpp"
#include <iostream>

void card()
{
	bool card = true;
	int money = 1;
	std::cout << "\nТинькофф - 220 330 112 3";
	std::cout << "\nБратишка жду 1000рублей за старание жи есть";

	for(int i = 1; i <= money; i++)
	{
		std::cout << "\nОплатил?\n1 - Да\n0 - Нет: ";
	    std::cin >> money;
		if (i == money)
		{
			std::cout << "\nСпасибо большое мы очень старались!\n\n\n";
			card = false;
		}
	else if (money == 0)
		{
			std::cout << "\nЗавтра к тебе приедет в гости омон и казнят тебя на медном быке!\n\n\n";
			card = false;
		}

	}
}
