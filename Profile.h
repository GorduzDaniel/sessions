#pragma once
#include "User.h"
#include "Session.h"

class Profile
{
public:
	Profile();
	void addSession(int, int, int, int);
	void removeSessions();
	string rapport();
	~Profile();
	int ID;
	string getRaport();

private:
	int number_of_sessions = 0;
	Session* sessions[30];
};

