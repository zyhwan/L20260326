#include "Engine.h"
#include "Actor.h"

UEngine::UEngine()
{
}

UEngine::~UEngine()
{
}

void UEngine::Init()
{

}

void UEngine::Run() 
{
	for (auto A : Actors)
	{
		A->Tick();
	}
}

void UEngine::Term()
{
	for (auto& A : Actors)
	{
		A->~AActor();
	}
}

void UEngine::Input()
{

}

void UEngine::Render()
{

}

void UEngine::SpawnActor(AActor* NewActor)
{
	Actors.push_back(new AActor());
}

std::vector<AActor*> UEngine::GetAllActorsOfClass()
{
	return std::vector<AActor*>();
}

AActor* UEngine::GetActorOfClass()
{
	return nullptr;
}
