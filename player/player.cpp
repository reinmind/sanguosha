#include "../hero/hero.h"
#include "player.h"
#include <iostream>
int player::judge_stage(){
	std::cout << "judge stage" << std::endl; 
	std::cout << "----------" << std::endl;
	return 1;
}
int player::draw_stage(){
	std::cout << "draw stage" << std::endl;
	std::cout << "----------" << std::endl;
	return 1;
}
int player::play_stage(){
	std::cout << "play stage" << std::endl;
	std::cout << "----------" << std::endl;
	return 1;
}
int player::discard_stage(){
	std::cout << "discard stage" << std::endl;
	std::cout << "----------" << std::endl;
	return 1;
}
int player::play_card(card * c1,hero * h){
	c1 -> affect(h,1);
	return 1;
}
int player::setHero(hero * h1){
	this -> h1 = h1;
	return 1;
}
player::player(){
	is_alive = 1;
}
