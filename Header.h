#pragma once

#include <iostream>
#include <limits>
#include "Header.h"


class Heroes {
	//attributes
	std::string name = "PLACEHOLDER";
	std::string role = "PLACEHOLDER";
	int health = 0;
	int armor = 0;
	int shield = 0;
	int dps = 0;
	int age = 0;


public:
	//Heroes(std::string new_name = "PLACEHOLDER", std::string new_role = "PLACEHOLDER", int new_health = 0, int new_armor = 0, int new_shield = 0, int new_dps = 0, int new_age = 0) {}

		std::string hero_info();
		std::string hero_name(std::string replace_name);
		void add_hero();
};
std::string splash_screen();
void clear();
void main_menu();