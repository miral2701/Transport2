#include "Bus.h"

Bus::Bus()
{
	passengers_count = 0;
	condition = false;
	chair = false;
	relax = false;
	max_bagage = 0;
}

Bus::Bus(int pas, bool con, bool chai, bool rel, int max_)
{
	passengers_count = pas;
	condition = con;
	chair = chai;
	relax = rel;
	max_bagage = max_;
}

void Bus::SetPassengersCount(int pasengers)
{
	passengers_count = pasengers;
}

void Bus::SetCondition(bool cond)
{
	condition = cond;
}

void Bus::SetChair(bool ch)
{
	chair = ch;
}

void Bus::SetRelax(bool rel)
{
	relax = rel;
}

void Bus::SetMaxBageage(int maxb)
{
	max_bagage = maxb;
}

int Bus::GetPassengersCount()
{
	return passengers_count;
}

bool Bus::GetCondition()
{
	return condition;
}

bool Bus::GetChair()
{
	return chair;
}

bool Bus::GetRelax()
{
	return relax;
}

int Bus::GetMaxBageage()
{
	return max_bagage;
}

void Bus::Comfort() {
	cout << "Уровень комфорта средний";
}