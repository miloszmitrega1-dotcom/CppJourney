#include <iostream>

int main()
{
	int health{};
	int defense{};
	int DMG{};


	std::cout << "Health: ";
	std::cin >> health;

	std::cout << "Defense: ";
	std::cin >> defense;

	std::cout << "Dmg: ";
	std::cin >> DMG;
	std::cout << '\n';

	std::cout << "Stats " << '\n';
	std::cout << "Health: " << health << '\n';
	std::cout << "Defense: " << defense << '\n';
	std::cout << "Dmg: " << DMG << '\n';
	std::cout << '\n';


	int damage = DMG - defense; // wynik bedzie ujemny jak defense bedzie mniejszy od DMG, potem naprawie to przez zywkła petle, pierw zrobie działanie na healthafter i potem if(healthafter < 0){healthafter = 0;}
	int HPafter = health - damage;

	std::cout << "Damage taken: " << damage << '\n';
	std::cout << "Health after damage: " << HPafter << '\n';

	std::cin.get();
}