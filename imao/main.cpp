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
	
		std::cout << "�������� ��������: " << "\n" << "1 - ����� � ����\n" << "0 - �����" << "\n";
		std::cin >> choice;
		if (choice == 1)
		{
			Menu();
		}
		else if (choice == 0)
		{
			std::cout << "����� �� ���������.\n";
		}
		else
		{
			std::cout << "�������� �����. ���������� �����.\n";
		}
}
