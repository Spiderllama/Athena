#pragma once

#include <iostream>
#include <limits>
#include "Header.h"
#include <vector>


class Heroes {
//attributes
private:
	std::string name = "PLACEHOLDER";
	int age = 0;
	std::string role = "PLACEHOLDER";
	int health = 0;
	int armor = 0;
	int shield = 0;
	int dps = 0;

public:

	Heroes(std::string new_name = "PLACEHOLDER", int new_age = 0, std::string new_role = "PLACEHOLDER", int new_health = 0, int new_armor = 0, int new_shield = 0, int new_dps = 0);
	
	//Displays the information for the hero in a nice layout
		std::string hero_info();

//Allows the program to adjust specific attributes to a HERO object or ALL at the same time
		void change_name(std::string replace_name);
		void change_role(std::string replace_role);
		void change_health(int replace_health);
		void change_armor(int replace_armor);
		void change_shield(int replace_shield);
		void change_dps(int replace_dps);
		void change_age(int replace_age);
		void change_all(std::string all_name, int all_age, std::string all_role, int all_health, int all_armor, int all_shield, int all_dps);

//Runs the AI program that will attach attribute to a HERO object
		void add_hero();
		 
//Adds hero name to the hero_box vector  
		void add_box();
};

//Title screen
std::string splash_screen();

//Shortcut to CLS - Should be replaced by something better
void clear();

//Adds the string values to the vector located in class.cpp
void add_AI_string();

//Not yet implemented
void main_menu();

//Lists the heroes in the box
void get_box();

