#pragma once
#include "Car.h"
#include <vector>
#include <fstream>
using namespace std;

class Management
{
private:
	vector<Car> ListCar;
	/*bool isModel(vector<Car> cars);
	bool isYearOfRrelease(vector<Car> cars);
	bool isEngineCapacity(vector<Car> cars);
	bool isPrice(vector<Car> cars);
	bool isQuantity(vector<Car> cars);*/
	bool sortBool(int index, vector<Car> ListCar, int it);

public:
	
	Management();

	void print();

	void sort(int index);
	void addCar(Car car);
	void delCar(string model);
	void edit(string model);
	void save();
};

