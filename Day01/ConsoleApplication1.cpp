#include <iostream>
#include <string>

void Program1()
{
    std::cout << "Hello\n";
}

void Program2()
{
    std::string name;
    std::cout << "Podaj imie: ";
    std::cin >> name;
    std::cout << "Czesc, " << name << "!\n";
}

void Program3()
{
    std::cout << "Linia 1\n";
    std::cout << "Linia 2\n";
    std::cout << "Linia 3\n";
    std::cout << "Linia 4\n";
    std::cout << "Linia 5\n";
}

int main()
{
    Program1();
    Program2();
    Program3();
    return 0;
}