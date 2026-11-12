#include <iostream>
#include <string>

	int DealDamage(int hp, int damage)
	{
		hp = hp - damage;
		return hp;
	}

	int HealthPercent(int hp, int maxHp)
	{
		return (hp * 100) / maxHp;
	}

	void PrintStatus(std::string name, int hp, int maxHp)
	{
		std::cout << "STATUS: " << name << '\n';
		std::cout << "HP: " << hp << '\n';
		std::cout << "HP Percent: " << HealthPercent(hp, maxHp) << "%\n";
		std::cout << "Max HP: " << maxHp << '\n';
	}

	int main()
	{
		int playerHp{ 100 };

		//Round 1
		playerHp = DealDamage(playerHp, 20);
		PrintStatus("Player", playerHp, 100);

		//Round 2
		playerHp = DealDamage(playerHp, 30);
		PrintStatus("Player", playerHp, 100);

		//Round 3
		playerHp = DealDamage(playerHp, 25);
		PrintStatus("Player", playerHp, 100);
	}