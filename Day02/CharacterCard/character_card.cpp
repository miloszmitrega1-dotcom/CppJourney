#include <iostream>
#include <string>

int main() {
	
	int health = 100;		// Character's health points
	int strength = 10;		// Character's strength level
	float speed = 5.0f;		// Character's speed in units per second
	bool isAlive = true;	// Character's alive status
	std::string name;		// Character's name
	int damage = 0;			// Damage taken by the character
	
	std::cout << "Character Card" << "\n";
	std::cout << "Standard character attributes are: " << "\n";
	std::cout << "- Health: " << health << "\n";
	std::cout << "- Strength: " << strength << "\n";
	std::cout << "- Speed: " << speed << "\n";
	
	
	std::cout << "Enter character name: ";
	std::cin >> name;

	std::cout << "Enter character health: ";
	std::cin >> health;

	std::cout << "Enter character strength: ";
	std::cin >> strength;

	std::cout << "Enter character speed: ";
	std::cin >> speed;
	std::cout << "---------------------------------" << "\n";


	std::cout << "Character Card" << "\n";
	std::cout << "Current character attributes are: " << "\n";
	std::cout << "- Name: " << name << "\n";
	std::cout << "- Health: " << health << "\n";
	std::cout << "- Strength: " << strength << "\n";
	std::cout << "- Speed: " << speed << "\n";


	std::cout << "How much dmg does the character take: " << "\n";
	std::cin >> damage;
	std::cout << "Character takes " << damage << " damage" << "\n";
	if (damage >= health) {
		isAlive = false;
		std::cout << "Character is dead" << "\n";
	}
	else {
		health -= damage;
		std::cout << "Character is alive with " << health << " health remaining" << "\n";
	}
}