#include "CGunWeapon.h"
#include"CWeapon.h"
#include<iostream>

using namespace std;
using namespace CivilizationGame;


	CGunWeapon::CGunWeapon()
	{

	}


	void CGunWeapon::changeGunWeapon(int cartridgeSize, int distance, double caliber, int weight, string creatorName, int releaseDate) {
		this->cartridgeSize = cartridgeSize;
		this->distance = distance;
		this->caliber = caliber;

		changeWeapon(weight, creatorName, releaseDate);

	}
	