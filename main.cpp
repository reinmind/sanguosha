#include "player/player.h"
#include "card/strike.cpp"
#include "hero/caocao.h"
int main(){
	player p1;
	strike card1;
	caocao hero1;
	p1.judge_stage();
	p1.draw_stage();
	p1.play_stage();
	p1.play_card((card*)&card1,(hero*)&hero1);
	//card1.affect((hero*)&hero1,1);
	p1.discard_stage();
}
