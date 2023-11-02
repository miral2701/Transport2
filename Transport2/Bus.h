#pragma once
#include "Transport.h"
class Bus :public Transport
{
	int passengers_count;
	bool condition;
	bool chair;
	bool relax;
	int max_bagage;
public:
	Bus();
	Bus(int pas, bool con, bool chai, bool rel, int max_, int w, int ma, int mi, int co);
	void SetPassengersCount(int pasengers);
	void SetCondition(bool cond);
	void SetChair(bool ch);
	void SetRelax(bool rel);
	void SetMaxBageage(int maxb);

	int GetPassengersCount();
	bool GetCondition();
	bool GetChair();
	bool GetRelax();
	int GetMaxBageage();

	void Comfort();
};

