#include<iostream>
#include"Player.h"

using namespace std;

int main()
{
	AActor* MyActor = new APlayer();

	APlayer* Player = dynamic_cast<APlayer*>(MyActor); //동적 형변환.
	//APlayer*가 맞는지 확인하고 형변환해준다.
	//만약 아니라면 nullptr을 반환한다.
	//맞다면 형변환.

	Player->Attack();

	delete MyActor;
	MyActor = nullptr;
}