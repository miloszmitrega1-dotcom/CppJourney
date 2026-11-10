#include <iostream>

int main()
{
    int a;
    int b;

    std::cout << "Podaj liczbe a i b: ";
    std::cin >> a >> b;

    int suma = a + b;
    int roznica = a - b;
    int iloczyn = a * b;
    int dzielenie = a / b;

    std::cout << "Suma: " << suma << '\n';
    std::cout << "Roznica: " << roznica << '\n';
    std::cout << "Iloczyn: " << iloczyn << '\n';
    std::cout << "Dzielenie: " << dzielenie << '\n';

}