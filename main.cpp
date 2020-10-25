#include <iostream>
#include "Header.h"
#include <Windows.h>
#include <mmsystem.h>


int main() {
	Heroes Ana("Ana", 60, "Healer", 200, 0, 0, 75);
	Heroes Baptise;
	Heroes Bastion;
	Heroes Rein;
	Heroes Torb;

	/*PlaySound(TEXT("Overwatch.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	std::cout << splash_screen();
	std::cin.ignore();
	Ana.add_hero();

	Ana.add_box();
	
	clear();
	std::cout << Ana.hero_info();*/
	Ana.add_box();
	std::cout << Ana.hero_info();
	Ana.change_all("Baptise", 5, "DPS", 5000, 200, 500, 1000);
	std::cout << Ana.hero_info();
	Ana.change_name("Ana");
	std::cout << Ana.hero_info();



	/*Baptise.hero_name("Baptise");
	Baptise.add_box();
	Bastion.hero_name("Bastion");
	Bastion.add_box();
	Rein.hero_name("Rein");
	Rein.add_box();
	Torb.hero_name("Torb");
	Torb.add_box();*/

	get_box();


}