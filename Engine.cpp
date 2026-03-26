#include "Engine.h"
#include "Actor.h"
#include "World.h"
#include <conio.h>

UEngine* UEngine::Instance = nullptr;
int UEngine::KeyCode = 0;

UEngine::UEngine()
{
	Init();
}

UEngine::~UEngine()
{
	Term();
}

void UEngine::Init()
{
	bIsRunning = true;
	World = new UWorld();
}

void UEngine::Run() 
{
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
}

UWorld* UEngine::GetWorld()
{
	return World;
}

void UEngine::Term()
{
	delete World;
	World = nullptr;
}

void UEngine::Input()
{
	KeyCode = _getch();
}

void UEngine::Tick()
{
	World->Tick();
}

void UEngine::Render()
{
	World->Render();
}

void UEngine::SpawnActor(AActor* NewActor)
{
}

std::vector<AActor*> UEngine::GetAllActorsOfClass()
{
	return std::vector<AActor*>();
}

AActor* UEngine::GetActorOfClass()
{
	return nullptr;
}
