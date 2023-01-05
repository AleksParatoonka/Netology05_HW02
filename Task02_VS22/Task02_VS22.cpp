// Task02_VS22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

struct bank_account {
    int number;
    std::string name;
    double amount; 
};

void new_amount(bank_account& b, double x) {
    b.amount = x;
}

int main()
{
    //setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x = 0;
    bank_account b;
    std::cout << "¬ведите номер счета: ";
    std::cin >> b.number;
    std::cout << "¬ведите им€: ";
    std::cin >> b.name;
    std::cout << "¬ведите баланс счета: ";
    std::cin >> b.amount;
    std::cout << "¬ведите новый баланс счета: ";
    std::cin >> x;
    new_amount(b, x);
    std::cout <<"¬аш счет: " << b.number << ", " << b.name << ", " << b.amount << std::endl;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
