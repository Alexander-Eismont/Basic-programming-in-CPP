/*
��������
�������� ���������, ������� ���������� � ������������ ����� ������ � ������� �� ����� �������� ������, ��������� �������������.
���� ������������ ��� ������������ ����� ������, �������� ��� �� ����.
����������� ������������ �� ��� ���, ���� �� �� ����� 0.
��� ������� ������ �������������� �������������.
*/


#include <iostream>

int getNumFromUser();
std::string chooseMonth(const int& num);
void printResult();

enum class months
{
	JANUARY = 1,
	FEBRUARY = 2,
	MARCH = 3,
	APRIL = 4,
	MAY = 5,
	JUNE = 6,
	JULY = 7,
	AUGUST = 8,
	SEPTEMBER = 9,
	OCTOBER = 10,
	NOVEMBER = 11,
	DECEMBER = 12
};


int main()
{
	setlocale(LC_ALL, "rus");

	printResult();

	return 0;
}

int getNumFromUser()
{
	int num;
	std::cin >> num;

	return num;
}

std::string chooseMonth(const int& num)
{
	std::string month;

	switch (num)
	{
	case static_cast<int>(months::JANUARY):
		month = "������";
		break;
	case static_cast<int>(months::FEBRUARY):
		month = "�������";
		break;
	case static_cast<int>(months::MARCH):
		month = "����";
		break;
	case static_cast<int>(months::APRIL):
		month = "������";
		break;
	case static_cast<int>(months::MAY):
		month = "���";
		break;
	case static_cast<int>(months::JUNE):
		month = "����";
		break;
	case static_cast<int>(months::JULY):
		month = "����";
		break;
	case static_cast<int>(months::AUGUST):
		month = "������";
		break;
	case static_cast<int>(months::SEPTEMBER):
		month = "��������";
		break;
	case static_cast<int>(months::OCTOBER):
		month = "�������";
		break;
	case static_cast<int>(months::NOVEMBER):
		month = "������";
		break;
	case static_cast<int>(months::DECEMBER):
		month = "�������";
		break;
	default:
		month = "�������� �����";
		break;
	}

	return month;
}

void printResult()
{
	int numFromUser;

	do
	{
		std::cout << "������� ����� ������ ��� 0, ����� �����: ";

		numFromUser = getNumFromUser();

		if (numFromUser == 0)
			break;

		std::cout << chooseMonth(numFromUser) << "\n";

	} while (true);
}