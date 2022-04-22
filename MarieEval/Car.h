#pragma once
#include <string>
#include <vector>
#include "CarColor.h"

class Car
{

private:

	std::string mBrand;
	std::string mModel;
	std::string mLicencePlate;

	int mYear;
	int mMileage;
	int mCost;

	CarColor mColor;

public:
	
	//Constructor & Destructors
	
	Car();
	Car(std::string brand, std::string model, std::string licencePlate, int year, int mileage, int cost, CarColor color);
	~Car();

	//getters & setters
	
	std::string GetBrand();
	std::string GetModel();
	std::string GetLicencePlate();
	int GetYear();
	int GetMileage();
	int GetCost();
	std::string GetColor();

	//Methodes

	void CarRoll();
	void CarChangeColor();

	void DisplayCarAttribute();

};

