#include <iostream>
#include <string>
using namespace std;

class Car{
	public:
	string brand;
	string model;
	string engine;
	int seats;

	void DisplayDetails(){
		cout << "Brand : " << brand <<endl;
		cout << "Model : " << model <<endl;
		cout << "Engine : " << engine <<endl;
		cout << "Seats : " << seats <<endl;
	}
};

int main(){
	Car car1;
	car1.brand = "Toyota";
	car1.model = "Triveno";
	car1.engine = "ECG";
	car1.seat = 4;
	car1.DisplayDetails();
	return 0;
}
