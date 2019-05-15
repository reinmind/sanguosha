#pragma once
class hero{
	protected:
		int health;
		int max_health;
	public:
		virtual int response(const char * card) = 0;
		int getHealth(){
			return health;
		}
};
