#include "stdafx.h"
#include "ProfileManager.h"
#include <fstream>



ProfileManager::ProfileManager()
{
}

void ProfileManager::read() {
	std::ifstream infile(file_input_name);

	int ID;
	int nr_click_stanga;
	int nr_click_dreapta;
	int timp_tasta;

	while (infile >> ID >> nr_click_stanga >> nr_click_dreapta >> timp_tasta)
	{
		this->add(ID, nr_click_stanga, nr_click_dreapta, timp_tasta);
	}
}

string ProfileManager::generate_raport() {
	string result = "";
	for (int i = 0; i < number_of_profiles; i++) {
		result += " " + this->profiles[i]->getRaport() + "\n";
	}
	return result;
}

void ProfileManager::add(int ID, int nr_click_stanga, int nr_click_dreapta, int timp_tasta) {
	int user_index = -1;

	Profile current_profile;

	for (int i = 0; i < number_of_profiles; i++) {
		if (this->profiles[i]->ID == ID) {
			user_index = i;
			this->profiles[i]->addSession(ID, nr_click_dreapta, nr_click_stanga, timp_tasta);
		}
	}

	if (user_index == -1) {
		this->profiles[this->number_of_profiles++] = new Profile();
		this->profiles[this->number_of_profiles]->addSession(ID, nr_click_dreapta, nr_click_stanga, timp_tasta);
	}
}


ProfileManager::~ProfileManager()
{
}
