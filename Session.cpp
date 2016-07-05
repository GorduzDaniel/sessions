#include "stdafx.h"
#include "Session.h"


Session::Session()
{
}

Session::Session(int nr_click_stanga, int nr_click_dreapta, int timp_tasta)
{
	this->nr_click_stanga = nr_click_stanga;
	this->nr_click_dreapta = nr_click_dreapta;
	this->timp_tasta = timp_tasta;
}

Session::~Session()
{
}
