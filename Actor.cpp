#include <Windows.h>
#include <iostream>
#include "Actor.h"


AActor::AActor(int InX, int Iny, char InMesh) : X(InX), Y(Iny), Mesh(InMesh)
{
}

AActor::~AActor()
{
}

void AActor::BeginPlay()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{
	COORD Coordinate;
	Coordinate.X = X;
	Coordinate.Y = Y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinate);

	std::cout << Mesh;

}
