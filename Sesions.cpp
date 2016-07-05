#include "stdafx.h"
#include <iostream>
#include "User.h"
#include <string>
#include <fstream>
using namespace std;

int main()
{
	//inscirerea in fisier
	ofstream myfile;
	myfile.open ("sesiuni.txt");
	User u1 =  User("fasfaxzxcvz", "Daniel", "Gorduz\n");
	string s = u1.signature();
	myfile << s;
	myfile.close();

	//citirea din fisier
	string line;
	ifstream myfile("example.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}

	else cout << "Unable to open file";

	system("pause");
    return 0;
}

