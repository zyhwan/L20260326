#include<iostream>
#include"Engine.h"
#include "World.h"

using namespace std;

int main()
{
	UEngine* MyEngine = new UEngine();

	MyEngine->GetWorld()->Load("MyMap.txt");

	MyEngine->Run();

	delete MyEngine;
}