#pragma once
#include <cstring>
#include <iostream>
class MyCar {
private:
	int licensePlate; // מספר רישוי
	int model;        // דגם
	int price;        // מחיר
	int year;         // שנה 
	char* color;       // צבע
	int engineCapacity;// נפח מנוע 
	char* chalkType;   // סוג גיר
	char* manufacturingCountry;// ארץ יצור
	int hand;         // יד
public:
	int getLicensePlate();
	int getModel();
	int getPrice();
	int getYear();
	char* getColor();
	int getEngineCapacity();
	char* getChalkType();
	char* getManufacturingCountry();
	int getHand();

	void setLicensePlate(int license);
	void setModel(int model);
	void setPrice(int price);
	void setYear(int year);
	void setColor(char* color);
	void setEngineCapacity(int engineC);
	void setChalkType(char* chalk);
	void setManufacturingCountry(char* country);
	void setHand(int hand);

};