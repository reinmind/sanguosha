class player{
	int is_alive;
	int cards_hand;
	int cards_max;
	public:
	int judge_stage();
	int draw_stage();
	int play_stage();
	int discard_stage();
};