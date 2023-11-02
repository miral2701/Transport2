#pragma once
#include "Transport.h"
class Train : public Transport

{
public:
	Train(int w, int ma, int mi, int co);

	void Comfort();
};

