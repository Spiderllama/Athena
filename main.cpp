#include <iostream>
#include "Header.h"
#include <Windows.h>
#include <mmsystem.h>


int main() {
	Heroes Ana;
	PlaySound(TEXT("Overwatch.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	std::cout << splash_screen();
	std::cin.ignore();
	Ana.add_hero();
	
	system("cls");
	std::cout << Ana.hero_info();
	
}