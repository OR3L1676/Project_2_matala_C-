#include "ManageCars.h"
using namespace std;

ManageCars::ManageCars() {
	value = new MyCar[100];
	numOfCars = 0;
}

ManageCars::~ManageCars() {
	delete[] value;
}

void ManageCars::printNumOfCars() {
	cout << numOfCars << endl;
}

void ManageCars::addCar(MyCar& car) {
	value[numOfCars] = car;
	numOfCars++;
}

void ManageCars::removeCar(int plate) {
	for (int i = 0; i < numOfCars; i++) {
		if (value[i].getLicensePlate() == plate) {
			for (int j = i; j < numOfCars - 1; j++) {
				value[j] = value[j + 1];
			}
			numOfCars--;
			cout << "Car with license plate " << plate << " removed." << endl;
			return;
		}
	}
	cout << "Can not remove the car with license plate " << plate << " not found." << endl;
}

void ManageCars::printCar(int plate) {
	int num = 1;
	for (int i = 0; i < numOfCars; i++) {
		if (plate == value[i].getLicensePlate()) {
			cout << "Car " << num << ": " << endl;
			value[i].toPrint();
			return;
		}
		num++;
	}
	cout << "Can not print the car with license plate " << plate << " not found." << endl;
}

void ManageCars::carsFromToYears(int fromYear, int toYear) {
	int year = fromYear;
	int found = 0;

	for (int i = 0; i < numOfCars; i++) {
		for (int j = fromYear; j <= toYear; j++) {
			if (j == value[i].getYear()) {
				found = 1;
				cout << value[i].getChalkType() << endl;
				cout << value[i].getColor() << endl;
				cout << value[i].getEngineCapacity() << endl;
				cout << value[i].getHand() << endl;
				cout << value[i].getLicensePlate() << endl;
				cout << value[i].getManufacturingCountry() << endl;
				cout << value[i].getModel() << endl;
				cout << value[i].getPrice() << endl;
				cout << value[i].getYear() << endl;
			}
		}
		if (found == 0) {
			cout << "Can not find a cars between the years you've entered." << endl;
		}
	}
}

void ManageCars::carsFromToPrice(int fromPrice, int toPrice) {
	int price = fromPrice;
	int found = 0;

	for (int i = 0; i < numOfCars; i++) {
		for (int j = fromPrice; j <= toPrice; j++) {
			if (j == value[i].getPrice()) {
				found = 1;
				cout << value[i].getChalkType() << endl;
				cout << value[i].getColor() << endl;
				cout << value[i].getEngineCapacity() << endl;
				cout << value[i].getHand() << endl;
				cout << value[i].getLicensePlate() << endl;
				cout << value[i].getManufacturingCountry() << endl;
				cout << value[i].getModel() << endl;
				cout << value[i].getPrice() << endl;
				cout << value[i].getYear() << endl;
			}
		}
	}
	if (found == 0) {
		cout << "Can not find a cars between the prices you've entered." << endl;
	}
}

void ManageCars::removeAllCars() {
	for (int i = 0; i < numOfCars - 1; i++) {
		for (int j = numOfCars; j >= 0; j--) {
			value[j] = value[j + 1];//[][][][][]
		}
		numOfCars--;
	}
	cout << "All the cars are deleted. " << endl;
}

void ManageCars::printAllCars() {
	for (int i = 0; i < numOfCars; i++) {
		cout << "Print all cars, Car" << i + 1 << endl;
		value[i].toPrint();
	}
}