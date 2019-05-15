#pragma once
#include "../hero/hero.h"
enum card_type {basic,weapon,sheild,strategy};
class card{
	card_type t;
	public:
		virtual int affect(hero * objs,int number) = 0;
};
