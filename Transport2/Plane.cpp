#include "Plane.h"
#include<iostream>
using namespace std;
void Plane::Comfort() {
	cout << "Уровень комфорта высокий";
}
Plane::Plane(int w, int ma, int mi, int co) :Transport(w, ma, mi, co) {

}