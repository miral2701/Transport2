#include<iostream>
#include"Transport.h"
#include"Car.h"
#include"Metro.h"
#include"Bus.h"
#include"Plane.h"
#include"Train.h"

using namespace std;


int main() {

	Transport* car = new Car(20,"A","sedan",4," ",120,180,60,100);
	Transport* bus = new Bus(20, true,true,true,100, 120, 160, 50, 20);
	Transport* metro = new Metro( 120, 500, 300, 10);
	Transport* plane = new Plane( 120, 500, 300, 10000);
	Transport* train = new Train(120, 400, 250, 400);

	int summa;
	int distance;


	cout << "Enter summa->";
	cin >> summa;
	cout << "Enter distance";
	cin >> distance;
	if (distance<1000) {
		if (summa > 500) {
			cout << "You can choose: car or bus";
		}
		else {
			cout << "You can choose: metro";

		}
	}
	else {
		if (summa > 500) {
			cout << "You can choose: plane or train";

		}
		else {
			cout << "You can choose: train";

		}
	}


}