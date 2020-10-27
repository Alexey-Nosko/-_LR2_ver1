#include"CWeapon.h"
#include<iostream>

using namespace std;
namespace CivilizationGame {

	CWeapon::CWeapon()
	{

	}
	CWeapon::CWeapon(int weight, string creatorName, int releaseDate)
	{
		this->weight = weight;
		this->creatorName = creatorName;
		this->releaseDate = releaseDate;
	}

	void CWeapon::changeWeapon(int weight, string creatorName, int releaseDate) {

		this->weight = weight;
		this->creatorName = creatorName;
		this->releaseDate = releaseDate;
	}

	void CWeapon::print() {

		cout << this->creatorName << endl;
		cout << this->releaseDate << endl;
		cout << this->weight << endl;
	}
	int CWeapon::getWeight()
	{
		return weight;
	}
	string CWeapon::getCreatorName()
	{
		return creatorName;
	}
	int CWeapon::getReleaseDate()
	{
		return releaseDate;
	}
}