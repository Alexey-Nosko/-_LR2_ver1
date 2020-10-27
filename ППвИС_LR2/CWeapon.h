#pragma once
#include<iostream>

using namespace std;
namespace CivilizationGame {
	class CWeapon
	{
	public:
		CWeapon();
		
		CWeapon(int weight, string creatorName, int releaseDate);
		virtual void getInfo() = 0;
		void print();
		friend std::ostream& operator<< (std::ostream& out, const CWeapon& point) {

			out << point.weight << endl;
			out << point.creatorName << endl;
			out << point.releaseDate << endl;

			return out;
		}
		int getWeight();
		string getCreatorName();
		int getReleaseDate();
		
		private:
		int weight;
		string creatorName;
		int releaseDate;
	protected:

		void changeWeapon(int weight, string creatorName, int releaseDate); 

	};
}