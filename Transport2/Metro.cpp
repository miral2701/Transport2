#include "Metro.h"
#include<iostream>
using namespace std;

void Metro::Comfort() {
	cout << "Уровень комфорта низкий";
}
Metro::Metro(int w, int ma, int mi, int co) :Transport(w, ma, mi, co) {

}
