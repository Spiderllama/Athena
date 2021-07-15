#include <iostream>
#include <string>
#include <limits>
#include "Header.h"
#include <sstream>

//Constructor for hero class which allows attributes to be assigned during object creaion
	Heroes::Heroes(std::string new_name, int new_age, std::string new_role, int new_health, int new_armor, int new_shield, int new_dps)
		: name(new_name), age(new_age), role(new_role), health(new_health), armor(new_armor), shield(new_shield), dps(new_dps) {}


//CPP call for the storage of hero names
std::vector <std::string> hero_box;

//Storage of AI responses to avoid multiple copies of same text - Executed as function 
std::vector <std::string> AI_responses;




//Displays the info of a hero object - returned as a string value
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

//Allows specific hero object attributes to be replaced
	void Heroes::change_name(std::string replace_name) {
		name = replace_name;
		return;
	}

	void Heroes::change_age(int replace_age) {
		age = replace_age;
		return;
	}

	void Heroes::change_role(std::string replace_role) {
		role = replace_role;
		return;
	}

	void Heroes::change_health(int replace_health) {
		health = replace_health;
		return;
	}

	void Heroes::change_armor(int replace_armor) {
		armor = replace_armor;
		return;
	}

	void Heroes::change_shield(int replace_shield) {
		shield = replace_shield;
		return;
	}

	void Heroes::change_dps(int replace_dps) {
		dps = replace_dps;
		return;
	}

	

//Replaces all attributes at the same time
	void Heroes::change_all(std::string all_name, int all_age, std::string all_role, int all_health, int all_armor, int all_shield, int all_dps) {
		name = all_name;
		age = all_age;
		role = all_role;
		health = all_health;
		armor = all_armor;
		shield = all_shield;
		dps = all_dps;
	
		return;
	}


//The "AI" that allows a new hero object to have attributes customized
	void Heroes::add_hero() {
		using namespace std;
		int smartass_counter = 0;
		add_AI_string();

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
				else {
					cout << "\n" << AI_responses[smartass_counter];	
				}
				if (smartass_counter < 5) {
					smartass_counter++;
				}
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
				else {
					cout << "\n" << AI_responses[smartass_counter];
				}
				if (smartass_counter < 5) {
					smartass_counter++;
				}
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
				else {
					cout << "\n" << AI_responses[smartass_counter];
				}
				if (smartass_counter < 5) {
					smartass_counter++;
				}
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
				else {
					cout << "\n" << AI_responses[smartass_counter];
				}
				if (smartass_counter < 5) {
					smartass_counter++;
				}
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
				else {
					cout << "\n" << AI_responses[smartass_counter];
				}
				if (smartass_counter < 5) {
					smartass_counter++;
				}
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

//Used on a hero object to add them to the hero_box
	void Heroes::add_box() {

		if (hero_box.empty()){
			hero_box.push_back("<EMPTY>");
		}

		hero_box.push_back(name);
			return;
}

//Displays names of all heros stored in hero_box
	void get_box() {
		for (int i = 1; i < hero_box.size(); i++)
		std::cout << hero_box[i] << " is number " << i << " in the box.\n";
	}

	//Fills the repeated AI responses initially to the vector
	void add_AI_string() {
		if (AI_responses.empty()) {
			//Takes up [0]
			AI_responses.push_back("never gets called");
			//Takes up [1]
			AI_responses.push_back("As we previously discussed you can't use letters. NUMBERS ONLY! Please try again: ");
			//Takes up [2]
			AI_responses.push_back("3rd time is not the charm. See, even *I* can use numbers and I'm just machinery. NUMBERS ONLY! Please try again: ");
			//Takes up [3]
			AI_responses.push_back("Did you really think that typing a letter again would have a different result?\n\nDo you know what the definition of insanity is? NUMBERS ONLY! Try again: ");
			//Takes up [4]
			AI_responses.push_back("I'm glad you're not the hero in question as I would very much be concerned with your IQ. NUMBERS ONLY!\n\nDo it again: ");
			//Takes up [5]
			AI_responses.push_back("THAT'S IT! I'm done with you. Message set to repeat.\n\n**** off and also NUMBERS ONLY!!  ");
		}
	}

//Main logo in a string value
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

//Archaic clearing system. Needs replaced once I figure out what to use instead (low priority) 
	void clear(){
		system("cls");
	}
//Not implemented yet
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
//Hero Box visuals
