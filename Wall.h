#pragma once
#include "Actor.h"

class AWall : public AActor
{
public:
	AWall(int InX = 0, int InY = 0, int InMesh = '#');
	virtual ~AWall();
};

