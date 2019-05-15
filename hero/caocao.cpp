#include "caocao.h"
#include <cstring>
#include <iostream>
int caocao::response(const char* card){
		if(strcmp(card,"strike") == 0){
			std::cout << "Do you want to evade?(Y/N)" << std::endl;
			char ans = getchar();
			if(ans == 'N' || ans == 'n'){
				--health;
			}
			std::cout << "current health:" << health << std::endl;
		return 0;	
		}
		return 1;
	}
caocao::caocao(){
	max_health = 4;
	health = 4 ;
}

