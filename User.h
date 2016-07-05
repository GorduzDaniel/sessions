#pragma once

#include <iostream>

using namespace std;

class User
{
public:
	User();
	User(int);
	~User();
	int signature();

	int getId();
	void setId(int id);
private:
	int id_utilizator;

};



