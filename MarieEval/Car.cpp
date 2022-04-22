#include <iostream>
#include "Car.h"

using namespace std;


Car::Car()
{
	mBrand = "Fiat";
	mModel = "Multiplat";
	mLicencePlate = "GH-456-XD";

	mYear = 2007;
	mMileage = 80000;
	mCost = 25000;

	mColor = CarColor::Cyan;
}

Car::Car(std::string brand, std::string model, std::string licencePlate, int year, int mileage, int cost, CarColor color)
{
	mBrand = brand;
	mModel = model;
	mLicencePlate = licencePlate;

	mYear = year;
	mMileage = mileage;
	mCost = cost;

	mColor = color;
}

Car::~Car()
{
}

std::string Car::GetBrand()
{
	return mBrand;
}

std::string Car::GetModel()
{
	return mModel;
}

std::string Car::GetLicencePlate()
{
	return mLicencePlate;
}

int Car::GetYear()
{
	return mYear;
}

int Car::GetMileage()
{
	return mMileage;
}

int Car::GetCost()
{
	return mCost;
}

string Car::GetColor()
{
	switch (mColor)
	{
	case CarColor::Red:
		return	"red";
		break;
	case CarColor::Green:
		return "Green";
		break;
	case CarColor::Blue:
		return "Blue";
		break;
	case CarColor::Yellow:
		return "Yellow";
		break;
	case CarColor::Cyan:
		return "Cyan";
		break;
	case CarColor::Magenta:
		return "Magenta";
		break;
	case CarColor::Default:
		break;
	default:
		break;
	}
}

void Car::CarRoll()
{
}

void Car::CarChangeColor()
{
}

void Car::DisplayCarAttribute()
{
	cout << "His car is a " << GetColor() << GetBrand() << GetModel() << " It's immatriculate: " << GetLicencePlate() << endl;
	cout << "That's the model from : " << GetYear() << " and it has " << GetMileage() << endl;
	cout << endl;
	cout << "The cost is " << GetCost() << endl;
}
