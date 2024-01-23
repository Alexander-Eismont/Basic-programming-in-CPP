/*
�������� ��������� ��� �������� ���������� � ���������� �����. ��� ������ ������� ����� ����� (����� �����), ��� ��������� (������) � ���������� ����� �� ����� (������� �����).
�������� ������� ��� ��������� ������� �����. ������� ������ ��������� ��������� ��������� ����������� ����� � ����� �����.
��������� ������������ ��������� ���� ���������� ���������, �������� ����� ������ ����� � �������� ���������� ��������� ��������� �� �������.
*/

#include <iostream>
#include <windows.h>

struct Account
{
    int account_number;
    std::string owner;
    double amount_of_money;
};

Account getInfoFromUser();
void newBalance(Account* account);
void printInfo(Account account);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Account account = getInfoFromUser();

    newBalance(&account);

    printInfo(account);
    
    return 0;
}

Account getInfoFromUser()
{
    Account information = {};

    std::cout << "������� ����� �����: ";
    std::cin >> information.account_number;

    std::cout << "������� ��� ��������� �����: ";
    std::cin >> information.owner;

    std::cout << "������� ������: ";
    std::cin >> information.amount_of_money;

    return information;
}

void newBalance(Account* account)
{
    std::cout << "������� ����� ������: ";
    std::cin >> account->amount_of_money;
}

void printInfo(Account account)
{
    std::cout << "��� ����: " << account.owner << ", " << account.account_number << ", " << account.amount_of_money;
}