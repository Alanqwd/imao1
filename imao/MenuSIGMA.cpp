
#include <iostream>
#include "settings.hpp"
#include "MenuSIGMA.hpp"
#include "Admins.hpp"
#include "card.hpp"

void Back();

void Menu()
{
	int play;
	std::cout << "Добро пожаловать в игру < SIGMA >" << "\n";
	std::cout << " ____      ____    __   __       ___ " << "\n";
	std::cout << "|      |  |       |  | | |      /  |" << "\n";
	std::cout << " |     |  |       |  |_| |     /   |" << "\n";
	std::cout << "  |    |  |  --|  |      |    /    |" << "\n";
	std::cout << "   |   |  |    |  |      |   /-----|" << "\n";
	std::cout << "____|  |  |____|  |      |  /      |" << "\n\n\n\n";
	std::string name = " ";
	std::cout << "Напиши свой ник: ";
	std::cin >> name;
	std::cout << "\nПривет " << name;
	std::cout << "\n\nМЕНЮ ИГРЫ:" << "\n\n";
	std::cout << "|_________________________________|" << "\n";
	std::cout << " | 1 - Играть                    |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 2 - Настройки                 |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 3 - О разработчиках           |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 4 - Пожертвовать(обязательно) |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 5 - О игре                    |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |_______________________________|" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " | 6 - Выйти из игры             |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << "|---------------------------------|" << "\n\n\n";
	std::cin >> play;
	if (play == 1)
	{
		std::cout << "В разработке";
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
		std::cout << "Пока герой ";
	}
}

void Back()
{
	int play;

	std::cout << "\n|_________________________________|" << "\n";
	std::cout << " | 1 - Играть                    |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 2 - Настройки                 |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 3 - О разработчиках           |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 4 - Пожертвовать(обязательно) |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |-------------------------------|" << "\n";
	std::cout << " | 5 - О игре                    |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " |_______________________________|" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << " | 6 - Выйти из игры             |" << "\n";
	std::cout << " |                               |" << "\n";
	std::cout << "|---------------------------------|" << "\n\n\n";
	std::cin >> play;
	if (play == 1)
	{
		std::cout << "В разработке";
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
		std::cout << "В разработке";
		Back();
	}
	else if (play == 6)
	{
		std::cout << "Пока герой ";
	}
}