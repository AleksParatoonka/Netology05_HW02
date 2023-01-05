// Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

struct adress {
    std::string city;
    std::string street;
    int building;
    int room;
    int code;
};

void print_adress(adress a){
    std::cout << "Город: " << a.city << std::endl;
    std::cout << "Улица: " << a.street << std::endl;
    std::cout << "Дом: " << a.building << std::endl;
    std::cout << "Квартира: " << a.room << std::endl;
    std::cout << "Индекс: " << a.code << std::endl;
    std::cout << std::endl;
}

int main()
{
    //std::cout << "Hello World!\n";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    adress a = {"Москва","Арбат", 12, 8, 123456};

    adress b = { "Ижевск","Пушкина", 59, 143, 953769 };

    print_adress(a);
    print_adress(b);
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
