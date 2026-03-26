#pragma once
#include <vector>

class AActor;

class UEngine
{
public:
	UEngine();
	~UEngine();

	void Init();
	void Term();

	void Run();
	void Render();

	void SpawnActor(AActor* NewActor);

	std::vector<AActor*> GetAllActorsOfClass();
	AActor* GetActorOfClass();

protected:
	void Input();

	std::vector<AActor*> Actors;
};

