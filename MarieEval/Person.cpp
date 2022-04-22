#include <iostream>
#include "Person.h"
#include "Car.h"
#include "CarColor.h"

using namespace std;

//Constructor & Destructor

Person::Person()
{

	mName = "Zayn";
	mLastName = "Cardot";
	mCatchPhrase = "Mhhhhhh...";
	mGender = "Man";

	mBirthDateDay = 14;
	mBirthDateMonth = 07;
	mBirthDateYear = 2002;
	mDefaultMoney = 7;

	mCar;

}

Person::Person(string name, string lastName, string catchPhrase, string gender, int birthDateDay, int birthDateMonth, int birthDateYear, int defaultMoney, Car car)
{
	mName = name;
	mLastName = lastName;
	mCatchPhrase = catchPhrase;
	mGender = gender;

	mBirthDateDay = birthDateDay;
	mBirthDateMonth = birthDateMonth;
	mBirthDateYear = birthDateYear;
	mDefaultMoney = defaultMoney;

	mCar = car;
}

Person::~Person()
{
}

//Getters & Setters

std::string Person::GetName()
{
	return mName;
}

std::string Person::GetLastName()
{
	return mLastName;
}

std::string Person::GetCatchPhrase()
{
	return mCatchPhrase;
}

std::string Person::GetGender()
{
	return mGender;
}

int Person::GetBirthDay()
{
	return mBirthDateDay;
}

int Person::GetBirthMonth()
{
	return mBirthDateMonth;
}

int Person::GetBirthYears()
{
	return mBirthDateYear;
}

int Person::GetDeafaultMoney()
{
	return mDefaultMoney;
}

Car& Person::GetCar()
{
	return mCar;
}


//Methods

void Person::Introduction()
{
	cout << "You encouter " << GetName() << GetLastName() << " Say to you: " << GetCatchPhrase() << endl;
	cout << GetName();
	BirthDate();
	cout << " and he's a " << GetGender() << endl;
}


void Person::BirthDate()
{
	cout << " is born the " << mBirthDateDay << "/" << mBirthDateMonth << " of " << mBirthDateYear;
}

void Person::SellCar()
{
}

void Person::BuyCar()
{
}

void Person::RollCar()
{
}

void Person::PaintCar()
{
}
