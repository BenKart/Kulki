#include "Plansza.h"

	Plansza::Plansza() {
		tabela = new pionek*[12];
		for (int i = 0; i < 12; i++) {
			tabela[i] = new pionek[12];
			for (int j = 0; j < 12; j++) {
				tabela[i][j] = brak;
			}
		}
	}
	Plansza::~Plansza() {
		for (int j = 0; j < 12; j++) {
			delete tabela[j];
		}
		delete tabela;
	}
	bool Plansza::czyzajety(int x,int y) {
		if (0 > x || x > 11 || 0 > y || y > 11)return false;
		if (tabela[x][y] == brak)return false;
		else return true;
	}
	bool Plansza::poloz(int x,int y,pionek nowy) {
		if (0 > x || x > 11 || 0 > y || y > 11)return false;
		if (czyzajety(x,y))return false;
		else tabela[x][y] = nowy;
	}
	Plansza::pionek Plansza::colezy(int x, int y) {
		if (0 > x || x > 11 || 0 > y || y > 11)return brak;
		return tabela[x][y];
	}
