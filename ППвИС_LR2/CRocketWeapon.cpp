#include "CRocketWeapon.h"
#include<iostream>

using namespace std;
namespace CivilizationGame 
{
	void CRocketWeapon::print() {
		
		cout << this->destroyArea << endl;
		cout << this->distance << endl;
		CWeapon::print();
		CRocketEngine::print();
	}
}