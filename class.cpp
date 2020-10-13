#define NOMINMAX

#include <iostream>
#include <string>
#include <Windows.h>
#include "Header.h"

	/*Heroes::Heroes(std::string new_name="PLACEHOLDER", std::string new_role="PLACEHOLDER", int new_health=0, int new_armor=0, int new_shield=0, int new_dps=0, int new_age=0)
		: name(new_name), role(new_role), health(new_health), armor(new_armor), shield(new_shield), dps(new_dps), age(new_age) {}*/
	
	void Heroes::hero_info() {
		std::cout << "Name: " << name << "\nAge: " << age << "\nRole: " << role << "\nHealth: " << health << "\nArmor: " << armor << "\nShields: " << shield << "\nDamage Per Shot: " << dps << "\n\n";
		return;
	}

	std::string Heroes::hero_name(std::string replace_name) {
		name = replace_name;
		return name;
	}

	void Heroes::add_hero() {
		std::cout << "Thank you for using Athena by Winston(tm). Please type the name of the prospective Hero: ";
		std::getline(std::cin, name);
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); Don't need to use this after Getline, seems that only cin directly causes a \n
		std::cout << "\n" << name << " is a wonderful name! Next, enter their age ";
		std::cin >> age;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "\nI remember when I was that young....-sigh-...I digress, what is the primary role of the Hero? ";
		std::getline(std::cin, role);
		std::cout << "\nWe could always use another " << role << " in our line of work. How much health does " << name << " have: ";
		std::cin >> health;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "\nI'm glad they're so healthy. Do they wear any armor? ";
		std::cin >> armor;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (armor > 0) std::cout << "\nNot everyone can wear armor that weighs " << armor << " pounds. They must be really strong!";
		if (armor == 0) std::cout << "\nIt must be too heavy, that's OK.\n";
		std::cout << "\nHow about shields? Do they have any of those online? ";
		std::cin >> shield;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (shield > 0) std::cout << "\nIt's nice to have someone on the team that understand tech really well!";
		if (shield == 0) std::cout << "\nShields are overrated anyways.\n";
		std::cout << "\nHow much damage or healing do they do with a single shot of their weapon? ";
		std::cin >> dps;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << dps << " is a good amount. Maybe sometime I could check out their weapon and see how it works? ";
		std::cout << "\nWell it looks like that's everything! Thanks for adding a new Hero into our database!\n";
		return;
	}

	void splash_screen(bool animated) {
	Splash:
		system("cls");
		std::cout << "                                                                                             \n";
		std::cout << "                                                ###############                              \n";
		std::cout << "                                             , #######   ####### ,                           \n";
		std::cout << "                                          *,,,,,               ,,,,,                         \n";
		std::cout << "                                         ,,,,,        , ,        ,,,,,                       \n";
		std::cout << "                                        ,,,,,        ,, ,,        ,,,,                       \n";
		std::cout << "                                        ,,,,        ,,, ,,,       ,,,,,                      \n";
		std::cout << "                                        ,,,,,     ,,,,, ,,,,,     ,,,,,                      \n";
		std::cout << "                                         ,,,,  ,,,,,,    ,,,,,,, ,,,,,                       \n";
		std::cout << "                                          ,,,,,,,,,         ,,,,,,,,,                        \n";
		std::cout << "                                           ,,,,,,,           ,,,,,,,                         \n";
		std::cout << "                                              ,,,,,,,,,,,,,,,,,,,                            \n";
		std::cout << "                                                  ,,,,,,,,,,,                                \n";
		std::cout << "                                                                                             \n";
		std::cout << "        ________  ___      ___ _______   ________  ___       __   ________  _________  ________  ___  ___        \n";
		std::cout << "       |\\   __  \\|\\  \\    /  /|\\  ___ \\ |\\   __  \\|\\  \\     |\\  \\|\\   __  \\|\\___   ___\\\\   ____\\|\\  \\|\\  \\       \n";
		std::cout << "       \\ \\  \\|\\  \\ \\  \\  /  / | \\   __/|\\ \\  \\|\\  \\ \\  \\    \\ \\  \\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\___|\\ \\  \\\\\\  \\      \n";
		std::cout << "        \\ \\  \\\\\\  \\ \\  \\/  / / \\ \\  \\_|/_\\ \\   _  _\\ \\  \\  __\\ \\  \\ \\   __  \\   \\ \\  \\ \\ \\  \\    \\ \\   __  \\     \n";
		std::cout << "         \\ \\  \\\\\\  \\ \\    / /   \\ \\  \\_|\\ \\ \\  \\\\  \\\\ \\  \\|\\__\\_\\  \\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\____\\ \\  \\ \\  \\    \n";
		std::cout << "          \\ \\_______\\ \\__/ /     \\ \\_______\\ \\__\\\\ _\\\\ \\____________\\ \\__\\ \\__\\   \\ \\__\\ \\ \\_______\\ \\__\\ \\__\\   \n";
		std::cout << "           \\|_______|\\|__|/       \\|_______|\\|__|\\|__|\\|____________|\\|__|\\|__|    \\|__|  \\|_______|\\|__|\\|__|   \n";
		std::cout << "                                                                                                                 \n";
		std::cout << "                                    ____  ___  _________    ____  ___   _____ ______\n";
		std::cout << "                                   / __ \\/   |/_  __/   |  / __ )/   | / ___// ____/\n";
		std::cout << "                                  / / / / /| | / / / /| | / __  / /| | \\__ \\/ __/  \n";
		std::cout << "                                 / /_/ / ___ |/ / / ___ |/ /_/ / ___ |___/ / /___  \n";
		std::cout << "                                /_____/_/  |_/_/ /_/  |_/_____/_/  |_/____/_____/  \n";
		std::cout << "                                                                                  \n\n";
		std::cout << "                                           [ PRESS ENTER TO CONTINUE ]                                                       ";

		if (animated == true) {
			Sleep(1000);
			system("cls");
			std::cout << "                                                                                             \n";
			std::cout << "                                                ###############                              \n";
			std::cout << "                                             , #######   ####### ,                           \n";
			std::cout << "                                          *,,,,,               ,,,,,                         \n";
			std::cout << "                                         ,,,,,        , ,        ,,,,,                       \n";
			std::cout << "                                        ,,,,,        ,, ,,        ,,,,                       \n";
			std::cout << "                                        ,,,,        ,,, ,,,       ,,,,,                      \n";
			std::cout << "                                        ,,,,,     ,,,,, ,,,,,     ,,,,,                      \n";
			std::cout << "                                         ,,,,  ,,,,,,    ,,,,,,, ,,,,,                       \n";
			std::cout << "                                          ,,,,,,,,,         ,,,,,,,,,                        \n";
			std::cout << "                                           ,,,,,,,           ,,,,,,,                         \n";
			std::cout << "                                              ,,,,,,,,,,,,,,,,,,,                            \n";
			std::cout << "                                                  ,,,,,,,,,,,                                \n";
			std::cout << "                                                                                             \n";
			std::cout << "        ________  ___      ___ _______   ________  ___       __   ________  _________  ________  ___  ___        \n";
			std::cout << "       |\\   __  \\|\\  \\    /  /|\\  ___ \\ |\\   __  \\|\\  \\     |\\  \\|\\   __  \\|\\___   ___\\\\   ____\\|\\  \\|\\  \\       \n";
			std::cout << "       \\ \\  \\|\\  \\ \\  \\  /  / | \\   __/|\\ \\  \\|\\  \\ \\  \\    \\ \\  \\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\___|\\ \\  \\\\\\  \\      \n";
			std::cout << "        \\ \\  \\\\\\  \\ \\  \\/  / / \\ \\  \\_|/_\\ \\   _  _\\ \\  \\  __\\ \\  \\ \\   __  \\   \\ \\  \\ \\ \\  \\    \\ \\   __  \\     \n";
			std::cout << "         \\ \\  \\\\\\  \\ \\    / /   \\ \\  \\_|\\ \\ \\  \\\\  \\\\ \\  \\|\\__\\_\\  \\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\____\\ \\  \\ \\  \\    \n";
			std::cout << "          \\ \\_______\\ \\__/ /     \\ \\_______\\ \\__\\\\ _\\\\ \\____________\\ \\__\\ \\__\\   \\ \\__\\ \\ \\_______\\ \\__\\ \\__\\   \n";
			std::cout << "           \\|_______|\\|__|/       \\|_______|\\|__|\\|__|\\|____________|\\|__|\\|__|    \\|__|  \\|_______|\\|__|\\|__|   \n";
			std::cout << "                                                                                                                 \n";
			std::cout << "                                    ____  ___  _________    ____  ___   _____ ______\n";
			std::cout << "                                   / __ \\/   |/_  __/   |  / __ )/   | / ___// ____/\n";
			std::cout << "                                  / / / / /| | / / / /| | / __  / /| | \\__ \\/ __/  \n";
			std::cout << "                                 / /_/ / ___ |/ / / ___ |/ /_/ / ___ |___/ / /___  \n";
			std::cout << "                                /_____/_/  |_/_/ /_/  |_/_____/_/  |_/____/_____/  \n";
			std::cout << "                                                                                  \n\n";
			std::cout << "                                           [ PRESS       TO CONTINUE ]                                                       ";
			Sleep(1000);
			goto Splash;

		}
	}
	
	void clear(){
		system("cls");
	}
	void main_menu() {
		using namespace std;

		cout << "     __| |____________________________________________| |__                                          \n";
		cout << "    (__   ____________________________________________   __)                                         \n";
		cout << "       | |                                            | |                                            \n";
		cout << "       | |                                            | |                                            \n";
		cout << "       | |                                            | |                                            \n";
		cout << "       | |                                            | |                                            \n";
		cout << "       | |                                            | |                                            \n";
		cout << "       | |                                            | |                                            \n";
		cout << "       | |                                            | |                                            \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";
		cout << "                                                                                                     \n";


	}
