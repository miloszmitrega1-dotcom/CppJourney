#include <iostream>
#include <string>

int main()
{
	//sekcja danych gracza
	std::string nazwa = "Malboro78Malboro78AB";
	std::string klasa = "Mag";
	int poziom = 30;
	int zdrowie = 15;
	int sila = 20;
	int inteligencja = 50;
	int wytrzymalosc = 10;
	int zrecznosc = 25;

	//sekcja wyświetlania statystyk gracza
	std::cout << "------------Statystyki-----------\n";
	std::cout << "Nazwa: " << nazwa << "		|\n";
	std::cout << "Klasa: " << klasa << "			|\n";
	std::cout << "Poziom: " << poziom << "			|\n";
	std::cout << "Zdrowie: " << zdrowie << "			|\n";
	std::cout << "Sila: " << sila << "			|\n";
	std::cout << "Inteligencja: " << inteligencja << "		|\n";
	std::cout << "Wytrzymalosc: " << wytrzymalosc << "		|\n";
	std::cout << "Zrecznosc: " << zrecznosc << "			|\n";
	std::cout << "---------------------------------\n";
}