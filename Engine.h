#pragma once
#include <vector>

class AActor;
class UWorld;

class UEngine
{
public:
	UEngine();
	~UEngine();

	void Init();
	void Term();

	void Run();

	UWorld* GetWorld();

	void SpawnActor(AActor* NewActor);

	std::vector<AActor*> GetAllActorsOfClass();
	AActor* GetActorOfClass();

protected:
	void Input();
	void Tick();
	void Render();

	class UWorld* World;

	int bIsRunning : 1; //:콜론 -> int 변수를 1bit만 사용하겠다는 의미.

};

