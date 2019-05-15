#include "card.h"
#include "../hero/hero.h"
class strike : public card{
	public:
	int affect(hero * objs,int number = 1){
		for(int i = 0;i < number; ++i){
			objs -> response("strike");
			if(i < number -1)
			++objs;
		}
		return 1;	
	}
};
