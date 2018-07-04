#pragma once
#include "Plansza.h"

class Gracz;

class Kulki:Plansza {
public:
	Kulki(Gracz,Gracz);
	bool zacznijgre();
	bool zresetujgre();
private:
};
