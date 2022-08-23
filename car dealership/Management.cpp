#include "Management.h"

bool Management::sortBool(int index, vector<Car> ListCar, int it)
{
	
	if (index == 1) {
		return (ListCar[it].getModel() > ListCar[it + 1].getModel());
	}
	else if (index == 2) {
		return (ListCar[it].getYearOfRelease() > ListCar[it + 1].getYearOfRelease());
	}
	else if (index == 3) {
		return (ListCar[it].getEngineCapacity() > ListCar[it + 1].getEngineCapacity());
	}
	else if (index == 4) {
		return (ListCar[it].getPrice() > ListCar[it + 1].getPrice());
	}
	else if (index == 5) {
		return (ListCar[it].getQuantity() > ListCar[it + 1].getQuantity());
	}
	else {
		return false;
	}

}

Management::Management()
{

	ifstream fcars("Cars.txt");

	if (fcars.is_open()) {
		string temp;
		Car tem;
		int tempi;
		float tempf;
		while (fcars) {
			temp.clear();
			
			getline(fcars, temp);
			if (temp == "") {
				getline(fcars, temp);
			}			
			tem.setModel(temp);
			fcars >> tempi;			
			tem.setYearOfRelease(tempi);
			fcars >> tempf;			
			tem.setEngineCapacity(tempf);
			fcars >> tempi;			
			tem.setPrice(tempi);
			fcars >> tempi;			
			tem.setQuantity(tempi);
			addCar(tem);
		}


		fcars.close();


	}
	else {

		ofstream Cars;
		Cars.open("Cars.txt");
		Cars.close();		
	}

}

void Management::print()
{
	for (Car tm : ListCar) {
		if (tm.getModel() == "") {
			continue;
		}
		else {
			tm.print();
			cout << endl;
		}
		
	}
}

void Management::sort(int index)
{

	for (int i = 0; i < ListCar.size() - 1; i++) {
		for (int j = i; j < ListCar.size() - 1; j++) {
			if (sortBool(index, ListCar, j)) {
				Car temp = ListCar[j];
				ListCar[j] = ListCar[j + 1];
				ListCar[j + 1] = temp;
			}
		}
	}

}

void Management::addCar(Car car)
{
	ListCar.push_back(car);
}

void Management::delCar(string model)
{
	vector<Car>::iterator i;
	
	for (i = ListCar.begin(); i != ListCar.end(); i++) {

		if ((*i).getModel() == model) {
			ListCar.erase(i);			
		}
	}
	
}

void Management::edit(string model)
{
	int number = -1;
	for (int i = 0; i < ListCar.size(); i++) {
		
		if (ListCar[i].getModel() == model) {
			number = i;
			break;
		}
	}

	if (number > -1) {
		string temp;		
		int tempi;
		float tempf;

		ListCar[number].print();
		cout << "Model" << endl;
		cin >> temp;
		ListCar[number].setModel(temp);
		cout << "Year of release " << endl;
		cin >> tempi;
		ListCar[number].setYearOfRelease(tempi);
		cout << "Engine capacity " << endl;
		cin >> tempf;
		ListCar[number].setEngineCapacity(tempf);
		cout << "Price " << endl;
		cin >> tempi;
		ListCar[number].setPrice(tempi);
		cout << "Quantity " << endl;
		cin >> tempi;
		ListCar[number].setQuantity(tempi);
	}
	else {
		cout << "Model error" << endl;
	}

}

void Management::save()
{
	ofstream Cars;
	Cars.open("Cars.txt", ios_base::app);
	if (Cars.is_open()) {
		for (int i = 0; i < ListCar.size(); i++) {
			if (ListCar[i].getModel() != "") {
				Cars << ListCar[i].getModel() << endl;
				Cars << ListCar[i].getYearOfRelease() << endl;
				Cars << ListCar[i].getEngineCapacity() << endl;
				Cars << ListCar[i].getPrice() << endl;
				Cars << ListCar[i].getQuantity() << endl;
			}
			else {
				continue;
			}
			
		}
	}
	
}
