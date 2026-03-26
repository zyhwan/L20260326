#pragma once
#include<vector>
#include<string>

class AActor;

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	template<typename T>
	AActor* SpawnActor(int x, int y, char mesh)
	{
		AActor* NewActor = new T(x, y, mesh);
		Actors.push_back(NewActor);

		return NewActor;
	}

	//월드가 시작하면 로드를 먼저한다.
	void Load(std::string MapName);

	inline std::vector<class AActor*>& GetActors()
	{
		return Actors;
	}

	void Tick();
	void Render();

protected:
	std::vector<class AActor*> Actors;

};

