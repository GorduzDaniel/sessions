#include <stdafx.h>
#include "User.h"

User::User()
{
}

User::User(int id)
{
	this->id_utilizator = id;
}

int User::signature()
{
	return this->id_utilizator;
}

int User::getId()
{
	return this->id_utilizator;
}

void User::setId(int id)
{
	this->id_utilizator = id;
}

User::~User()
{
}


