#pragma once

class Plansza {
public:
	Plansza() {
		tabela = new pionek*[12];
		for (int i = 0; i < 12; i++) {
			tabela[i] = new pionek[12];
			for (int j = 0; j < 12;j++) {
				tabela[i][j] = brak;
			}
		}
	}
	enum pionek {
		bialy = 1,
		czarny = 2,
		brak = 0,
	};
private:
	pionek** tabela;
};