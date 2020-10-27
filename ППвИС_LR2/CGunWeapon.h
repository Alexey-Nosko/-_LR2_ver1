#pragma once
#include"CWeapon.h"
namespace CivilizationGame {
	class CGunWeapon : public CWeapon
	{

	private:
		int cartridgeSize;
		int distance;
		double caliber;

	public:

		CGunWeapon();
		CGunWeapon(int cartridgeSize, int distance, double caliber, int weight, string creatorName, int releaseDate) :CWeapon(weight, creatorName, releaseDate)
		{
			this->cartridgeSize = cartridgeSize;
			this->distance = distance;
			this->caliber = caliber;

		}
		void getInfo() { cout << "this is  gun" << endl; }
		void changeGunWeapon(int cartridgeSize, int distance, double caliber, int weight, string creatorName, int releaseDate); 
		friend std::ostream& operator<< (std::ostream& out, const CGunWeapon& point) {

			out << "-------------" << endl;
			out << point.cartridgeSize << endl;
			out << point.distance << endl;
			out << point.caliber << endl;
			
			return out;
		}
	};
}