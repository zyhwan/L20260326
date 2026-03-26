#pragma once
#include "Actor.h"

class AMonster : public AActor
{
public:
	AMonster(int InX = 7, int InY = 7, char InMesh = 'M');
	virtual ~AMonster();

};

