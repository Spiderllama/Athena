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
	
	//Displays the information for the hero in a nice layout
		std::string hero_info();

//Allows the program to adjust specific attributes to a HERO object
		std::string hero_name(std::string replace_name);
		std::string hero_role(std::string replace_role);
		int hero_health(int replace_health);
		int hero_armor(int replace_armor);
		int hero_shield(int replace_shield);
		int hero_dps(int replace_dps);
		int hero_age(int replace_age);

//Runs the AI program that will attach attribute to a HERO object
		void add_hero();
};

//Title screen
std::string splash_screen();

//Shortcut to CLS - Should be replaced by something better
void clear();

//Not yet implemented
void main_menu();