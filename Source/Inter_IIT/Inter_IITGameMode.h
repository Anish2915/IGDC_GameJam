// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include <map>
#include <set>
using namespace std;
#include "Inter_IITGameMode.generated.h"

UCLASS(minimalapi)
class AInter_IITGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AInter_IITGameMode();

	UFUNCTION(BlueprintCallable)
	void doorclosecpp(int a, int b);

	UFUNCTION(BlueprintCallable)
	void dooropencpp(int a, int b);

	UFUNCTION(BlueprintCallable)
	int ghostwalkcpp(int ghostLoc , int camLoc );

	map<int, set<int , greater<int>>> gs;
	map<int, set<int , greater<int>>> cs;

	UFUNCTION(BlueprintCallable)
	int randomGhostWalkcpp(int camLoc);
};



