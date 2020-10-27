#pragma once
#include "CWeapon.h"
namespace CivilizationGame {
	class CSteelArm : public CWeapon
	{

	private:
		string material;
		int bladeLength;
	public:
		CSteelArm();
		
		CSteelArm(string material, int bladeLenght, int weight, string creatorName, int releaseDate) :CWeapon(weight, creatorName, releaseDate) {

			this->material = material;
			this->bladeLength = bladeLenght;
		}
		void getInfo() { std::cout << "SteelArm" << endl;}
		friend std::ostream& operator<< (std::ostream& out, const CSteelArm& point) {

			out << "-------------" << endl;
			out << point.material << endl;
			out << point.bladeLength << endl;
		
			return out;
		}
	};

}