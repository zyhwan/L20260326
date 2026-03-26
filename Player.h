#pragma once
#include "Actor.h"

class APlayer : public AActor
{
public:
	APlayer(int InX = 1, int InY = 1, char InMesh = 'P');
	virtual ~APlayer();

	virtual void Render() override;

	void Attack();
};

