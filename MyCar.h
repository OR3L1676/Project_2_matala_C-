#pragma once
#include <cstring>
#include <iostream>
class MyCar {
private:
	int licensePlate; // ���� �����
	int model;        // ���
	int price;        // ����
	int year;         // ��� 
	char* color;       // ���
	int engineCapacity;// ��� ���� 
	char* chalkType;   // ��� ���
	char* manufacturingCountry;// ��� ����
	int hand;         // ��
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