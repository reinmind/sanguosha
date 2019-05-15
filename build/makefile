player.so : 
	g++ ../player/player.cpp -c -o player.so

hero.so : 
	g++ ../hero/caocao.cpp -c -o hero.so

card.so : 
	g++ ../card/strike.cpp -c -o card.so

build : player.so hero.so card.so 
	g++ ../main.cpp hero.so card.so player.so -o run.o

clean : 
	rm run.o card.so player.so hero.so

