#pragma once

class Plansza {
public:
	Plansza();
	enum pionek {
		bialy = 1,
		czarny = 2,
		brak = 0,
	};
	union polozenie {
		int x;
		int y;
	};
protected:
	bool poloz(int, int, pionek);
	bool czyzajety(int,int);
	pionek colezy(int,int);
private:
	pionek** tabela;
	~Plansza();
};