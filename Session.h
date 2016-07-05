#pragma once
#include "User.h"

class Session {
public:
	Session();
	Session(int, int, int);
	~Session();
private:
	int nr_click_stanga;
	int nr_click_dreapta;
	int timp_intre_taste;
	int timp_tasta;
};

