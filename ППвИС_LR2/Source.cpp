#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "CGunWeapon.h"
#include"CRocketWeapon.h"
#include "CSteelArm.h"
#include "CWeapon.h"



using namespace std;
using namespace CivilizationGame;


void printGun() {

	// open file
	ifstream GunWeaponFile("GunWeapon.txt", ios::in);
	if (!GunWeaponFile) {
		cerr << "cannot open file\n";
		exit(1);
	}

	//loop, reading line from file while more lines
	string data;
	while (getline(GunWeaponFile, data)) {

		// split line into fields
		stringstream sst(data);
		string a;
		vector<string> vfield;
		while (getline(sst, a, ';'))
			vfield.push_back(a);
		int xx = stoi("12");

		CGunWeapon gunWeapon(stoi(vfield[0]), stoi(vfield[1]), stof(vfield[2]), stoi(vfield[3]), vfield[4], stoi(vfield[5]));
	
		std::cout << gunWeapon;
		cout << gunWeapon.getWeight() << endl;
		cout << gunWeapon.getCreatorName() << endl;
		cout << gunWeapon.getReleaseDate() << endl;
	}
}
void printSteelArm() {

	// open file
	ifstream SteelArmFile("SteelArm.txt", ios::in);
	if (!SteelArmFile) {
		cerr << "cannot open file\n";
		exit(1);
	}

	//loop, reading line from file while more lines
	string data;
	while (getline(SteelArmFile, data)) {

		// split line into fields
		stringstream sst(data);
		string a;
		vector<string> vfield;
		while (getline(sst, a, ';'))
			vfield.push_back(a);
		int xx = stoi("12");

		CSteelArm steelArm(vfield[0], stoi(vfield[1]), stoi(vfield[2]), vfield[3], stoi(vfield[4]));

		std::cout << steelArm;

		cout << steelArm.getWeight() << endl;
		cout << steelArm.getCreatorName() << endl;
		cout << steelArm.getReleaseDate() << endl;
	}
}
void printRocketWeapon() {

	// open file
	ifstream RocketWeaponFile("RocketWeapon.txt", ios::in);
	if (!RocketWeaponFile) {
		cerr << "cannot open file\n";
		exit(1);
	}

	//loop, reading line from file while more lines
	string data;
	while (getline(RocketWeaponFile, data)) {

		// split line into fields
		stringstream sst(data);
		string a;
		vector<string> vfield;
		while (getline(sst, a, ';'))
			vfield.push_back(a);
		int xx = stoi("12");

		CRocketWeapon rocketWeapon(stoi(vfield[0]), stoi(vfield[1]), stoi(vfield[2]), vfield[3], stoi(vfield[4]),vfield[5],stoi(vfield[6]),stoi(vfield[7]));

		std::cout << rocketWeapon;
		cout << rocketWeapon.getWeight() << endl;
		cout << rocketWeapon.getCreatorName() << endl;
		cout << rocketWeapon.getReleaseDate() << endl;

	}
}


void main() {

	setlocale(LC_ALL, "rus");

    CWeapon *mas[5];
	CGunWeapon gun(7,1,5.56,800,"Kalashnikov",1970);
	CSteelArm w1("metal", 4, 6, "PQ", 90);
	CRocketWeapon roc(20, 1000, 25, "Korolev", 1982, "turbojet", 56, 2000);
	
	mas[0] = &gun;
	mas[1] = &roc;
	mas[2] = &w1;
	for (int i = 0; i <= 2; i++)
		mas[i]->getInfo();

	printGun();
	printSteelArm();
	printRocketWeapon();
}

