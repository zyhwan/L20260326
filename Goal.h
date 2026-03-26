#pragma once
#include "Actor.h"

class AGoal : public AActor
{
public:
	AGoal(int InX = 8, int InY = 8, char InMesh = 'G');
	virtual ~AGoal();

};

