
#include <iostream>
#include "Person.h"
#include "Car.h"
#include "CarColor.h"

int main()
{
	Car multiplat = Car("Fiat", "Multiplat", "GH-456-XD", 2007, 80000, 25000, CarColor::Cyan);
	Person zayn = Person("Zayn", "Cardot", "Mhhhhhh...", "Man", 14, 07, 2000, 7, multiplat);

	zayn.Introduction();
	multiplat.DisplayCarAttribute();
}

