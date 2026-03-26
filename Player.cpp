#include <iostream>
#include "Player.h"

APlayer::APlayer(int InX, int InY, char InMesh)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
}

APlayer::~APlayer()
{
}

void APlayer::Render()
{
	__super::Render();
}

void APlayer::Attack()
{
	std::cout << "АјАн" << std::endl;
}
