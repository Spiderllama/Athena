#include <iostream>
#include <string>
#include <limits>
#include "Header.h"

	/*Heroes::Heroes(std::string new_name="PLACEHOLDER", std::string new_role="PLACEHOLDER", int new_health=0, int new_armor=0, int new_shield=0, int new_dps=0, int new_age=0)
		: name(new_name), role(new_role), health(new_health), armor(new_armor), shield(new_shield), dps(new_dps), age(new_age) {}*/
	
	std::string Heroes::hero_info() {
		using namespace std;
		string info;

		info += "Name: ";
		info += name;
		info += "\nAge: ";
		info += to_string(age);
		info += "\nRole: ";
		info += role; 
		info += "\nHealth: ";
		info += to_string(health);
		info += "\nArmor: ";
		info += to_string(armor);
		info += "\nShields: ";
		info += to_string(shield);
		info += "\nDamage Per Shot: ";
		info += to_string(dps);
		info += "\n\n";

		return info;
	}

	std::string Heroes::hero_name(std::string replace_name) {
		name = replace_name;
		return name;
	}

	void Heroes::add_hero() {
		using namespace std;
		int smartass_counter = 0;

		cout << "Thank you for using Athena by Winston(tm). Please type the name of the prospective Hero: ";
		getline(cin, name);
		//cin.ignore(numeric_limits<streamsize>::max(), '\n'); Don't need to use this after Getline, seems that only cin directly causes a \n
		cout << "\n" << name << " is a wonderful name! Next, enter their age ";
		cin >> age;

		while (1) {
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				if (smartass_counter == 0) {
					cout << "\nI'm 100% sure that age can't contain alphabetic characters. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 1) {
					cout << "\nAs we previously discussed you can't use letters. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 2) {
					cout << "\n3rd time is not the charm. See, even *I* can use numbers and I'm just machinery. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 3) {
					cout << "\nDid you really think that typing a letter again would have a different result?\n\nDo you know what the definition of insanity is? NUMBERS ONLY! Try again: ";
				}
				else if (smartass_counter == 4) {
					cout << "\nI'm glad you're not the hero in question as I would very much be concerned with your IQ. NUMBERS ONLY!\n\nDo it again: ";
				}
				else if (smartass_counter >= 5) {
					cout << "\nTHAT'S IT! I'm done with you. Message set to repeat.\n\n**** off and also NUMBERS ONLY!!  ";
				}
				smartass_counter++;
				cin >> age;
			}
			if (!cin.fail()) {
				break;
			}
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\nI remember when I was that young....-sigh-...I digress, what is the primary role of the Hero? ";
		getline(cin, role);
		cout << "\nWe could always use another " << role << " in our line of work. How much health does " << name << " have: ";
		cin >> health;

		while (1) {
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				if (smartass_counter == 0) {
					cout << "\nI'm 100% sure that health pools can't contain alphabetic characters. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 1) {
					cout << "\nAs we previously discussed you can't use letters. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 2) {
					cout << "\n3rd time is not the charm. See, even *I* can use numbers and I'm just machinery. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 3) {
					cout << "\nDid you really think that typing a letter again would have a different result?\n\nDo you know what the definition of insanity is? NUMBERS ONLY! Try again: ";
				}
				else if (smartass_counter == 4) {
					cout << "\nI'm glad you're not the hero in question as I would very much be concerned with your IQ. NUMBERS ONLY! Do it again: ";
				}
				else if (smartass_counter >= 5) {
					cout << "\nTHAT'S IT! I'm done with you. Message set to repeat.\n\n**** off and also NUMBERS ONLY!!  ";
				}
				smartass_counter++;
				cin >> health;
			}
			if (!cin.fail()) {
				break;
			}
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\nI'm glad they're so healthy. Do they wear any armor and if yes how much? ";
		cin >> armor;

		while (1) {
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				if (smartass_counter == 0) {
					cout << "\nI'm 100% sure that armor weight can't contain alphabetic characters. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 1) {
					cout << "\nAs we previously discussed you can't use letters. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 2) {
					cout << "\n3rd time is not the charm. See, even *I* can use numbers and I'm just machinery. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 3) {
					cout << "\nDid you really think that typing a letter again would have a different result?\n\nDo you know what the definition of insanity is? NUMBERS ONLY! Try again: ";
				}
				else if (smartass_counter == 4) {
					cout << "\nI'm glad you're not the hero in question as I would very much be concerned with your IQ. NUMBERS ONLY!\n\nDo it again: ";
				}
				else if (smartass_counter >= 5) {
					cout << "\nTHAT'S IT! I'm done with you. Message set to repeat.\n\n**** off and also NUMBERS ONLY!!  ";
				}
				smartass_counter++;
				cin >> armor;
			}
			if (!cin.fail()) {
				break;
			}
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (armor > 0) cout << "\nNot everyone can wear armor that weighs " << armor << " pounds. They must be really strong!\n";
		if (armor == 0) cout << "\nIt must be too heavy, that's OK.\n";
		cout << "\nHow about shields? Do they have any of those online? ";
		cin >> shield;

		while (1) {
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				if (smartass_counter == 0) {
					cout << "\nI'm 100% sure that shield % can't contain alphabetic characters. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 1) {
					cout << "\nAs we previously discussed you can't use letters. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 2) {
					cout << "\n3rd time is not the charm. See, even *I* can use numbers and I'm just machinery. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 3) {
					cout << "\nDid you really think that typing a letter again would have a different result?\n\nDo you know what the definition of insanity is? NUMBERS ONLY! Try again: ";
				}
				else if (smartass_counter == 4) {
					cout << "\nI'm glad you're not the hero in question as I would very much be concerned with your IQ. NUMBERS ONLY!\n\nDo it again: ";
				}
				else if (smartass_counter >= 5) {
					cout << "\nTHAT'S IT! I'm done with you. Message set to repeat.\n\n**** off and also NUMBERS ONLY!!  ";
				}
				smartass_counter++;
				cin >> shield;
			}
			if (!cin.fail()) {
				break;
			}
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (shield > 0) cout << "\nIt's nice to have someone on the team that understand tech really well!\n";
		if (shield == 0) cout << "\nShields are overrated anyways.\n";
		cout << "\nHow much damage or healing do they do with a single shot of their weapon? ";
		cin >> dps;

		while (1) {
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				if (smartass_counter == 0) {
					cout << "\nI'm 100% sure that weapon damage can't contain alphabetic characters. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 1) {
					cout << "\nAs we previously discussed you can't use letters. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 2) {
					cout << "\n3rd time is not the charm. See, even *I* can use numbers and I'm just machinery. NUMBERS ONLY! Please try again: ";
				}
				else if (smartass_counter == 3) {
					cout << "\nDid you really think that typing a letter again would have a different result?\n\nDo you know what the definition of insanity is? NUMBERS ONLY! Try again: ";
				}
				else if (smartass_counter == 4) {
					cout << "\nI'm glad you're not the hero in question as I would very much be concerned with your IQ. NUMBERS ONLY!\n\nDo it again: ";
				}
				else if (smartass_counter >= 5) {
					cout << "\nTHAT'S IT! I'm done with you. Message set to repeat.\n\n**** off and also NUMBERS ONLY!!  ";
				}
				smartass_counter++;
				cin >> dps;
			}
			if (!cin.fail()) {
				break;
			}
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\n" << dps << " is a good amount. Maybe sometime I could check out their weapon and see how it works?\n ";
		cout << "\nWell it looks like that's everything! Thanks for adding a new Hero into our database!\n";
		return;
	}



	std::string splash_screen() {
		std::string logo;
	
		logo += "                                                                                             \n";
		logo += "                                                ###############                              \n";
		logo += "                                             , #######   ####### ,                           \n";
		logo += "                                          *,,,,,               ,,,,,                         \n";
		logo += "                                         ,,,,,        , ,        ,,,,,                       \n";
		logo += "                                        ,,,,,        ,, ,,        ,,,,                       \n";
		logo += "                                        ,,,,        ,,, ,,,       ,,,,,                      \n";
		logo += "                                        ,,,,,     ,,,,, ,,,,,     ,,,,,                      \n";
		logo += "                                         ,,,,  ,,,,,,    ,,,,,,, ,,,,,                       \n";
		logo += "                                          ,,,,,,,,,         ,,,,,,,,,                        \n";
		logo += "                                           ,,,,,,,           ,,,,,,,                         \n";
		logo += "                                              ,,,,,,,,,,,,,,,,,,,                            \n";
		logo += "                                                  ,,,,,,,,,,,                                \n";
		logo += "                                                                                             \n";
		logo += "        ________  ___      ___ _______   ________  ___       __   ________  _________  ________  ___  ___        \n";
		logo += "       |\\   __  \\|\\  \\    /  /|\\  ___ \\ |\\   __  \\|\\  \\     |\\  \\|\\   __  \\|\\___   ___\\\\   ____\\|\\  \\|\\  \\       \n";
		logo += "       \\ \\  \\|\\  \\ \\  \\  /  / | \\   __/|\\ \\  \\|\\  \\ \\  \\    \\ \\  \\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\___|\\ \\  \\\\\\  \\      \n";
		logo += "        \\ \\  \\\\\\  \\ \\  \\/  / / \\ \\  \\_|/_\\ \\   _  _\\ \\  \\  __\\ \\  \\ \\   __  \\   \\ \\  \\ \\ \\  \\    \\ \\   __  \\     \n";
		logo += "         \\ \\  \\\\\\  \\ \\    / /   \\ \\  \\_|\\ \\ \\  \\\\  \\\\ \\  \\|\\__\\_\\  \\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\____\\ \\  \\ \\  \\    \n";
		logo += "          \\ \\_______\\ \\__/ /     \\ \\_______\\ \\__\\\\ _\\\\ \\____________\\ \\__\\ \\__\\   \\ \\__\\ \\ \\_______\\ \\__\\ \\__\\   \n";
		logo += "           \\|_______|\\|__|/       \\|_______|\\|__|\\|__|\\|____________|\\|__|\\|__|    \\|__|  \\|_______|\\|__|\\|__|   \n";
		logo += "                                                                                                                 \n";
		logo += "                                    ____  ___  _________    ____  ___   _____ ______\n";
		logo += "                                   / __ \\/   |/_  __/   |  / __ )/   | / ___// ____/\n";
		logo += "                                  / / / / /| | / / / /| | / __  / /| | \\__ \\/ __/  \n";
		logo += "                                 / /_/ / ___ |/ / / ___ |/ /_/ / ___ |___/ / /___  \n";
		logo += "                                /_____/_/  |_/_/ /_/  |_/_____/_/  |_/____/_____/  \n";
		logo += "                                                                                  \n\n";
		logo += "                                           [ PRESS ENTER TO CONTINUE ]                                                       ";

		return logo;

		/*if (animated == true) {
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
		*/
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
