#pragma once
class Transport
{
protected:
	int weight;
	int max_speed;
	int mid_speed;
	int cost_per_100;

public:
	Transport();
	Transport(int w, int ma, int mi, int co);
	void SetWeight(int we);
	void SetMaxSpeed(int ma);
	void SetMidSpeed(int mi);
	void SetCost(int co);

	int GetWeight();
	int GetMaxSpeed();
	int GetMidSpeed();
	int GetCost();

	virtual void Comfort() = 0;
};



