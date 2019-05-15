#include "../hero/hero.h"
#include "../card/card.h"
class player{
	int is_alive;
	card * cards_in_hand;
	int cards_in_hand_number;
	int cards_max;
	hero * h1;
	public:
	player();
	int play_card(card * c1,hero * h);
	int judge_stage();
	int draw_stage();
	int play_stage();
	int discard_stage();
	int setHero(hero * h1);
	
};
