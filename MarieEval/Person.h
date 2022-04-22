#pragma once
#include <string>
#include <vector>
#include "Car.h"

class Person
{

private :

	std::string mName;
	std::string mLastName;
	std::string mCatchPhrase;
	std::string mGender;

	int mBirthDateDay;
	int mBirthDateMonth;
	int mBirthDateYear;
	int mDefaultMoney;

	Car mCar;

public :

	int mCurrentMoney;

	//Constructor & Destructors

	Person();
	Person(std::string name, std::string lastName, std::string catchPhrase, std::string , int birthDateDay , int birthDateMonth , int birthDateYear ,int defaultMoney, Car car);

	~Person();

	//getters & setters

	std::string GetName();
	std::string GetLastName();
	std::string GetCatchPhrase();
	std::string GetGender();

	int GetBirthDay();
	int GetBirthMonth();
	int GetBirthYears();
	int GetDeafaultMoney();

	Car& GetCar();

	//Methodes

		//About the person
	void Introduction();
	void BirthDate();

		//About the car
	void SellCar();
	void BuyCar();
	void RollCar();
	void PaintCar();

};

