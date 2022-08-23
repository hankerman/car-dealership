#pragma once
#include <string>
#include <iostream>
using namespace std;


class Car
{
private:
	string model;
	int year_of_release;
	float engine_capacity;
	int price;
	int quantity;

public:

	Car();
	Car(string model, int year_of_release, float engine_capacity, int price, int quantity);
	Car(const Car& cars);

	void setModel(string model);
	void setYearOfRelease(int year_of_release);
	void setEngineCapacity(float engine_capacity);
	void setPrice(int price);
	void setQuantity(int quantity);

	string getModel();
	int getYearOfRelease();
	float getEngineCapacity();
	int getPrice();
	int getQuantity();

	void print();

};

