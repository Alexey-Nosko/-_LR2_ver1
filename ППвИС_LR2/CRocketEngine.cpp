#include "CRocketEngine.h"
#include<iostream>

using namespace std;
namespace CivilizationGame
{
	void CRocketEngine::print()
	{
		cout << this->power << endl;
		cout << this->reliability << endl;
		cout << this->rocketEngineType << endl;
	}

	CRocketEngine::CRocketEngine() {

	}
	CRocketEngine::CRocketEngine(string rocketEngineType, int reliability, int power) {

		this->power = power;
		this->reliability = reliability;
		this->rocketEngineType = rocketEngineType;

	}


}