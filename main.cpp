#include <iostream>
#include "Header.h"
#include <Windows.h>
#include <mmsystem.h>


int main() {
	Heroes Ana;
	PlaySound(TEXT("Overwatch.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	splash_screen(false);
	std::cin.ignore();
	Ana.add_hero();
	Ana.hero_name("Winston");
	system("cls");
	Ana.hero_info();
	
}