/*
Create a structure to store the address. The structure must contain the name of the city, street, house number, apartment number and zip code.
Create a function to print the structure to the console.
Test the created function. Create instances of the structure in code, pass them to the function, and print the resulting instances of the structure to the console.
*/

#include <iostream>

struct Address
{
	std::string city;
	std::string street;
	int house_num;
	int flat_num;
	int zip_code;
};

void printAddress(Address* address);

int main()
{
	setlocale(LC_ALL, "rus");

	Address address_1 = { "������", "�����", 12, 8, 123456 };
	Address address_2 = { "������", "�������", 123, 123, 987654 };
	Address address_3 = { "�����", "�������������", 19, 91, 220000 };

	printAddress(&address_1);
	printAddress(&address_2);
	printAddress(&address_3);

	return 0;
}

void printAddress(Address* address)
{
	std::cout << "�����: " << address->city << "\n";
	std::cout << "�����: " << address->street << "\n";
	std::cout << "����� ����: " << address->house_num << "\n";
	std::cout << "����� ��������: " << address->flat_num << "\n";
	std::cout << "������: " << address->zip_code << "\n\n";
}