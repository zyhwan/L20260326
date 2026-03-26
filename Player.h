#pragma once
#include "Actor.h"


class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();

	virtual void Tick() override;
	virtual void Render() override;
	virtual void BeginPlay() override;

	void Attack();
};

