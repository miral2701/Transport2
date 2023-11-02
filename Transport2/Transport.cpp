#include "Transport.h"

Transport::Transport()
{
	weight = 0;
	max_speed = 0;
	mid_speed = 0;
	cost_per_100 = 0;
}

Transport::Transport(int w, int ma, int mi, int co)
{
	weight = w;
	max_speed = ma;
	mid_speed = mi;
	cost_per_100 = co;
}

void Transport::SetWeight(int we)
{
	weight = we;
}

void Transport::SetMaxSpeed(int ma)
{
	max_speed = ma;
}

void Transport::SetMidSpeed(int mi)
{
	mid_speed = mi;
}

void Transport::SetCost(int co)
{
	cost_per_100 = co;
}

int Transport::GetWeight()
{
	return weight;
}

int Transport::GetMaxSpeed()
{
	return max_speed;
}

int Transport::GetMidSpeed()
{
	return mid_speed;
}

int Transport::GetCost()
{
	return cost_per_100;
}
