#include "stdafx.h"
#include "User.h"
#include <string>

User::User()
{
}

User::User(string id, string firstName, string lastName)
{
	this->id_utilizator = id;
	this->firstName = firstName;
	this->lastName = lastName;
}

string User::signature()
{
	return this->id_utilizator + " " + this->firstName + " - " + this->lastName;
}

User::~User()
{
}

//Pentru clasa Profile
Profile::Profile() {

}

Profile::~Profile() { 

}

//Pentru clasa Sesion
Sesion::Sesion() {

}

Sesion::~Sesion() {

}
