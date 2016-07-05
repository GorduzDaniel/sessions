#pragma once
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class User
{
public:
	User();
	User(string, string, string);
	~User();
	string signature();
private:
	string id_utilizator;
	string firstName;
	string lastName;
};

//Clasa Profile
class Profile {
public:
	Profile();
	~Profile();

};

//Clasa Sesion
class Sesion {
public:
	Sesion();
	~Sesion();
private:
	int nr_click_stanga;
	int nr_click_dreapta;
	int timp_intre_taste;
	int timp_tasta;
};

