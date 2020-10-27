#pragma once
#include "CWeapon.h"
#include"CRocketEngine.h"
namespace CivilizationGame {
	class CRocketWeapon : public CWeapon, public CRocketEngine
	{
	private:
		int destroyArea;
		int distance;
	public:
		void print();
		CRocketWeapon()
		{

		}
		void getInfo() { cout << "this is  rocket" << endl; }
		

		
		CRocketWeapon(int destroyArea,int distance,int weight, string creatorName, int releaseDate,string rocketEngineType,int reliability,int power):CWeapon(weight, creatorName, releaseDate),CRocketEngine(rocketEngineType,reliability, power)
		{
			this->destroyArea = destroyArea;
			this->distance = distance;
			
		}
		friend std::ostream& operator<< (std::ostream& out,  CRocketWeapon& point) {

			out << "-------------" << endl;
			out << point.destroyArea << endl;
			out << point.distance << endl;
			out << point.power << endl;
			out << point.reliability << endl;
			out << point.rocketEngineType << endl;

			return out;
		}
	};

}