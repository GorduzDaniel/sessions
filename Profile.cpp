#include "stdafx.h"
#include "Profile.h"


Profile::Profile()
{
	this->number_of_sessions = 0;
}

string Profile::getRaport()
{
	string result = "";

	for (int i = 0; i < this->number_of_sessions; i++) {
		result += this->ID + " mega user";
	}

	return result;
}

void Profile::addSession(int ID, int nr_click_stanga, int nr_click_dreapta, int timp_tasta) {

	this->sessions[this->number_of_sessions] = new Session(nr_click_stanga, nr_click_dreapta, timp_tasta);
	this->number_of_sessions++;
	this->ID = ID;
}

void Profile::removeSessions() {
	for (int i = 0; i < this->number_of_sessions; i++) {
		delete (this->sessions[i]);
	}

	this->number_of_sessions = 0;
}

Profile::~Profile()
{
}
