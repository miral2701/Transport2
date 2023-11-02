#pragma once
#include "Transport.h"
class Plane : public Transport
{

public:
	Plane(int w, int ma, int mi, int co);

	void Comfort();
};

