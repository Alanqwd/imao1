
#include <iostream>
#include "settings.hpp"
#include "MenuSIGMA.hpp"
#include "Admins.hpp"
#include "card.hpp"

void Back();

void Menu()
{
	int play;
	std::cout << "����� ���������� � ���� < SIGMA >" << "\n";
	std::cout << " ____      ____    __   __       ___ " << "\n";
	std::cout << "|      |  |       |  | | |      /  |" << "\n";
	std::cout << " |     |  |       |  |_| |     /   |" << "\n";
	std::cout << "  |    |  |  --|  |      |    /    |" << "\n";
	std::cout << "   |   |  |    |  |      |   /-----|" << "\n";
	std::cout << "____|  |  |____|  |      |  /      |" << "\n\n\n\n";
	std::string name = " ";
	std::cout << "������ ���� ���: ";
	std::cin >> name;
	std::cout << "\n������ " << name;
	std::cout << "\n\n���� ����:" << "\n\n";
	std::cout << "|_________________________________|" << "\n";
	std::cout << " | 1 - ������                    |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 2 - ���������                 |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 3 - � �������������           |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 4 - ������������(�����������) |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 5 - � ����                    |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |_______________________________|" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " | 6 - ����� �� ����             |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << "|---------------------------------|" << "\n\n\n";
	std::cin >> play;
	if (play == 1)
	{
		std::cout << "� ����������";
		Back();
	}
	else if (play == 2)
	{
		Settings();
		Back();
	}
	else if (play == 3)
	{
		Admins();
		Back();
	}
	else if (play == 4)
	{
		card();
		Back();
	}
	else if (play == 5)
	{

		Back();
	}
	else if (play == 6)
	{
		std::cout << "���� ����� ";
	}
}

void Back()
{
	int play;

	std::cout << "\n|_________________________________|" << "\n";
	std::cout << " | 1 - ������                    |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 2 - ���������                 |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 3 - � �������������           |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 4 - ������������(�����������) |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 5 - � ����                    |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |_______________________________|" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " | 6 - ����� �� ����             |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << "|---------------------------------|" << "\n\n\n";
	std::cin >> play;
	if (play == 1)
	{
		std::cout << "� ����������";
		Back();
	}
	else if (play == 2)
	{
		Settings();
		Back();
	}
	else if (play == 3)
	{
		Admins();
		Back();
	}
	else if (play == 4)
	{
		card();
		Back();
	}
	else if (play == 5)
	{
		std::cout << "� ����������";
		Back();
	}
	else if (play == 6)
	{
		std::cout << "���� ����� ";
	}
}