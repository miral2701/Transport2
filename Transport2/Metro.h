#pragma once
#include "Transport.h"
class Metro :
    public Transport
{
public:
    Metro( int w, int ma, int mi, int co);

    void Comfort();
};

