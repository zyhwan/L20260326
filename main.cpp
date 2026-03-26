#include<iostream>
#include "Engine.h"
#include "World.h"

using namespace std;


// 싱글턴 디자인 패턴
// static을 사용하는 대표적인 디자인 패턴
// 엔진과 같은 클래스를 한번만 생성하게 막는다.



int main()
{
	UEngine* MyEngine = UEngine::GetInstance();

	MyEngine->GetWorld()->Load("MyMap.txt");

	MyEngine->Run();

	delete MyEngine;
}