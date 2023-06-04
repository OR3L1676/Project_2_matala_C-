#include <iostream>
using namespace std;
#include "MyCar.h"

int MyCar::getLicensePlate()
{
	return licensePlate;

}

int MyCar::getModel()
{
	return model;
}

int MyCar::getPrice()
{
	return price;
}

int MyCar::getYear()
{
	return year;
}

char* MyCar::getColor()
{
	return color;
}

int MyCar::getEngineCapacity()
{
	return engineCapacity;
}

char* MyCar::getChalkType()
{
	return chalkType;
}

char* MyCar::getManufacturingCountry()
{
	return manufacturingCountry;
}

int MyCar::getHand()
{
	return hand;
}

void MyCar::setLicensePlate(int license)
{
	licensePlate = license;
}

void MyCar::setModel(int model)
{
	this->model = model;
}

void MyCar::setPrice(int price)
{
	if (price > 0) {
		this->price = price;
	}else {
		cout << "Invalid price value." << endl;
	}
}

void MyCar::setYear(int year)
{
	this->year = year;
}

void MyCar::setColor(char* color)
{
	if (this->color) {
		delete[] this->color;
	}
	this->color = new char[strlen(color) + 1];
	strcpy(this->color, color);
}

void MyCar::setEngineCapacity(int engineC)
{
	if (engineC > 0) {
		engineCapacity = engineC;
	}
}

void MyCar::setChalkType(char* chalk)
{
	if (chalkType) {
		delete[] chalkType;
	}
	chalkType = new char[strlen(chalk) + 1];
	strcpy(chalkType, chalk);
}

void MyCar::setManufacturingCountry(char* country)
{
	if (manufacturingCountry) {
		delete[] manufacturingCountry;
	}
	manufacturingCountry = new char[strlen(country) + 1];
	strcpy(manufacturingCountry, country);
}

void MyCar::setHand(int hand)
{
	if (hand > 0) {
		this->hand = hand;
	}
	else {
		cout << "Invalid hand value." << endl;
	}
}
