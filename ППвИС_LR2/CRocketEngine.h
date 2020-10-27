#pragma once
#include<iostream>

using namespace std;

 namespace CivilizationGame {

	 class CRocketEngine
	 {

	 protected:

		 string rocketEngineType;
		 int reliability;
		 int power;

	 public:

		 
		 CRocketEngine();

		 CRocketEngine(string rocketEngineType, int reliability, int power);

		 void print();
	 };
		

}