#include <iostream>
#include "MenuSIGMA.hpp"
void Start();
int main()
{
	setlocale(LC_ALL, "ru");
	Start();



	return 0;
}

void Start()
{
	int choice;
	
		std::cout << "Выберите действие: " << "\n" << "1 - Зайти в игру\n" << "0 - Выход" << "\n";
		std::cin >> choice;
		if (choice == 1)
		{
			Menu();
		}
		else if (choice == 0)
		{
			std::cout << "Выход из программы.\n";
		}
		else
		{
			std::cout << "Неверный выбор. Попробуйте снова.\n";
		}
}
