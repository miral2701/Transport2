#include "Car.h"

Car::Car()
{
	max_baggage = 0;
	segment = "";
	kusov = "";
	passengers_count = 0;
	type = "";

}

Car::Car(int max, string seg, string kus, int pas, string typ)
{
	max_baggage = max;
	segment = seg;
	kusov = kus;
	passengers_count = pas;
	type = typ;
}

void Car::SetMaxBegage(int max)
{
	max_baggage = max;
}

void Car::SetSegment(string seg)
{
	segment = seg;
}

void Car::SetKusov(string kus)
{
	kusov = kus;
}

void Car::SetPassengerCount(int pas)
{
	passengers_count = pas;
}

void Car::SetType(string typ)
{
	type = typ;
}



int Car::GetMaxBegage()
{
	return max_baggage;
}

string Car::GetSegment()
{
	return segment;
}

string Car::GetKusov()
{
	return kusov;
}

string Car::GetType()
{
	return type;
}

void Car::Comfort() {
	cout << "Уровень комфорта высокий";
}