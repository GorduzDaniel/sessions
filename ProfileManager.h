#pragma once
#include <iostream>
#include "User.h"
#include "Session.h"
#include "Profile.h"


using namespace std;

class ProfileManager
{
public:
	ProfileManager();
	~ProfileManager();
	string const file_input_name = "sesiuni.txt";

	void read();
	void add(int, int, int, int);
	string generate_raport();

private:
	Profile* profiles[30];
	int number_of_profiles = 0;
};
