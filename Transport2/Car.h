#pragma once
#include<iostream>
using namespace std;
#include "Transport.h"
class Car :public Transport
{
	int max_baggage;
	string segment;
	string kusov;
	int passengers_count;
	string type;
public:
	Car();
	Car(int max,string seg,string kus,int pas,string typ);
	void SetMaxBegage(int max);
	void SetSegment(string seg);
	void SetKusov(string kus);
	void SetPassengerCount(int pas);
	void SetType(string typ);


	int GetMaxBegage();
	string GetSegment();
	string GetKusov();
	int GetPassengerCount();
	string GetType();

	void Comfort();
};

