#include "Train.h"
#include<iostream>
using namespace std;
void Train::Comfort() {
	cout << "Уровень комфорта средний";
}
Train::Train(int w, int ma, int mi, int co) :Transport(w, ma, mi, co) {

}