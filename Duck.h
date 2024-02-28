#pragma once
#include "Fly.h"
#include "Swim.h"

class Duck : public Fly, public Swim
{
public:
    void Quack();
};

