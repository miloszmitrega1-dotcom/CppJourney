#include <iostream>
#include <string>

int main()
{
	//sekcja danych gracza
	std::string nazwa = "Malboro78";
	std::string klasa = "Mag";
	int poziom = 30;
	int zdrowie = 20;
	int sila = 20;
	int inteligencja = 50;
	int wytrzymalosc = 10;
	int zrecznosc = 25;

	//sekcja wyświetlania statystyk gracza
	std::cout << "------------Statystyki------------\n";
	std::cout << "Nazwa:		" << nazwa << "  \t|\n";
	std::cout << "Klasa:		" << klasa << "  \t\t|\n";
	std::cout << "Poziom:		" << poziom << "  \t\t|\n";
	std::cout << "Zdrowie:	" << zdrowie << "  \t\t|\n";
	std::cout << "Sila:		" << sila << "  \t\t|\n";
	std::cout << "Inteligencja:	" << inteligencja << "  \t\t|\n";
	std::cout << "Wytrzymalosc:	" << wytrzymalosc << "  \t\t|\n";
	std::cout << "Zrecznosc:	" << zrecznosc << "  \t\t|\n";
	std::cout << "----------------------------------\n";
}