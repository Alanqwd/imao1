#include "card.hpp"
#include <iostream>

void card()
{
	bool card = true;
	int money = 1;
	std::cout << "\n�������� - 220 330 112 3";
	std::cout << "\n�������� ��� 1000������ �� �������� �� ����";

	for(int i = 1; i <= money; i++)
	{
		std::cout << "\n�������?\n1 - ��\n0 - ���: ";
	    std::cin >> money;
		if (i == money)
		{
			std::cout << "\n������� ������� �� ����� ���������!\n\n\n";
			card = false;
		}
	else if (money == 0)
		{
			std::cout << "\n������ � ���� ������� � ����� ���� � ������ ���� �� ������ ����!\n\n\n";
			card = false;
		}

	}
}
