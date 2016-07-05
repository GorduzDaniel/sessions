#include "stdafx.h"
#include "ProfileManager.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	ProfileManager profile_manager = ProfileManager();
	profile_manager.read();

	cout << profile_manager.generate_raport();

	// 1. Citim mai multe session-uri din file. Field static in Session::file_name
	// 2. In baza datelor din randul curent citit, cream obiectul de sesiune si de user
	// 
	// 3. Avand obiectul de sesiune si user, trebuie sa aruncam acest user si aceasta sesiune
	//    intr-un anumit profile. 
	// 
	// ProfileManager:
	//   Profile profiles;
	//
	// ProfileManager.read(string filename);
	// ProfileManager.add(User user, Session session);
	// ProfileManager.generate_rapport();
	//0
	// 
	// Profile:
	//   User user;
	//   Session sessions; -- mai multe
	// 4. Profilul, in baza user-ului si a listei de sesiuni poate crea un raport.
	//    Raportul se va scrie intr-un file.
	// 
	

	//inscirerea in fisier
	/*
	

	ofstream myfile;
	myfile.open ("sesiuni.txt");
	User u1 =  User("fasfaxzxcvz", "Daniel", "Gorduz\n");
	string s = u1.signature();
	myfile << s;
	myfile.close();
	*/

	//citirea din fisier
	
	/*string line;
	ifstream myfile("example.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}

	else cout << "Unable to open file";*/

	system("pause");
    return 0;
}

