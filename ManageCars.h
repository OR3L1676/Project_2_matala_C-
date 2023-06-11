#pragma once
#include <iostream>
#include "MyCar.h"
using namespace std;

class ManageCars {
private:
	MyCar* value;
    int numOfCars;
	
	
public:
	
	ManageCars();
	~ManageCars();
	void printNumOfCars();
	void addCar(MyCar& car);
	void removeCar(int plate);
	void printCar(int plate);
	void carsFromToYears(int fromYear, int toYear);
	void carsFromToPrice(int fromPrice, int toPrice);
	void removeAllCars();
	void printAllCars();
};