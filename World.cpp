#include "World.h"
#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "Wall.h"
#include "Floor.h"
#include "Goal.h"
#include <iostream>
#include <fstream>

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
	for (auto Actor : Actors)
	{
		delete Actor;
	}
	Actors.clear();
}

void UWorld::Load(std::string MapName)
{
	std::ifstream File(MapName);
	std::string Line;

	if (!File.is_open()) { // 2. 열기 실패 확인
		std::cout << "파일을 열 수 없습니다!" << std::endl;
		return;
	}
	int y = 0;
	while (!File.eof()) {
		std::getline(File, Line);
		for (int i = 0; i < Line.length(); ++i)
		{
			if (Line[i] == '#')
			{
				SpawnActor<AWall>(i, y, Line[i]);
			}
			if (Line[i] == ' ')
			{
				SpawnActor<AFloor>(i, y, Line[i]);
			}
			if (Line[i] == 'P')
			{
				SpawnActor<APlayer>(i, y, Line[i]);
			}
			if (Line[i] == 'M')
			{
				SpawnActor<AMonster>(i, y, Line[i]);
			}
			if (Line[i] == 'G')
			{
				SpawnActor<AGoal>(i, y, Line[i]);
			}
		}
		y++;
	}

}

void UWorld::Tick()
{
	for (auto Actor : Actors)
	{
		Actor->Tick();
	}
}

void UWorld::Render()
{
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}