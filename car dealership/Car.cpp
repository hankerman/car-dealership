#include "Car.h"

Car::Car() : Car("no neme", 0, 0, 0, 0)
{
}

Car::Car(string model, int year_of_release, float engine_capacity, int price, int quantity)
{
	this->model = model;
	this->year_of_release = year_of_release;
	this->engine_capacity = engine_capacity;
	this->price = price;
	this->quantity = quantity;
}

Car::Car(const Car& cars)
{
	model = cars.model;
	year_of_release = cars.year_of_release;
	engine_capacity = cars.engine_capacity;
	price = cars.price;
	quantity = cars.quantity;
}

void Car::setModel(string model)
{
	this->model = model;
}

void Car::setYearOfRelease(int year_of_release)
{
	this->year_of_release = year_of_release;
}

void Car::setEngineCapacity(float engine_capacity)
{
	this->engine_capacity = engine_capacity;
}

void Car::setPrice(int price)
{
	this->price = price;
}

void Car::setQuantity(int quantity)
{
	this->quantity = quantity;
}

string Car::getModel()
{
	return this->model;
}

int Car::getYearOfRelease()
{
	return this->year_of_release;
}

float Car::getEngineCapacity()
{
	return this->engine_capacity;
}

int Car::getPrice()
{
	return this->price;
}

int Car::getQuantity()
{
	return this->quantity;
}

void Car::print()
{
	cout << "Model " << "\t\t\t" << model << endl;
	cout << "Year of release " << '\t' << year_of_release << endl;
	cout << "Engine capacity " << '\t' << engine_capacity << endl;
	cout << "Price " << "\t\t\t" << price << endl;
	cout << "Quantity " << "\t\t" << quantity << endl;
}
