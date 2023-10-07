#include <iostream>
#include <ctime>
#include <cstdlib>

int random(int min=0, int max=10){
	std::srand(std::time(0));

	int randNum=min+(std::rand()%(max-min+1));
	return randNum;
}