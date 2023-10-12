// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include <map>
#include <vector>
#include <string>
using namespace std;
#include "cppGameInstance.generated.h"

/**
 * 
 */


UCLASS()
class INTER_IIT_API UcppGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:

	struct record{
		FString name;
		bool win;
		int time_h;
		int time_m;

		bool operator<(const record& s1) const
		{
			if (s1.win != win) {
				return win;
			}
			else
			{
				if (s1.win)
				{
					if (s1.time_h == time_h)
					{
						return s1.time_m > time_m;
					}
					else
					{
						return s1.time_h > time_h;
					}
				}
				else
				{
					if (s1.time_h == time_h)
					{
						return s1.time_m < time_m;
					}
					else
					{
						return s1.time_h < time_h;
					}
				}
			}
		}
	};

public:
	vector<record> recordvec;

	UFUNCTION(BlueprintCallable)
	void pushrecordcpp(bool wl, int timeh, int timem, FString name);

	UFUNCTION(BlueprintCallable)
	FString getrec1name();
	UFUNCTION(BlueprintCallable)
	FString getrec2name();
	UFUNCTION(BlueprintCallable)
	FString getrec3name();
	
	UFUNCTION(BlueprintCallable)
	int get1timeh();

	UFUNCTION(BlueprintCallable)
	int get2timeh();

	UFUNCTION(BlueprintCallable)
	int get3timeh();


	
	UFUNCTION(BlueprintCallable)
	int get1timem();
	UFUNCTION(BlueprintCallable)
	int get2timem();
	UFUNCTION(BlueprintCallable)
	int get3timem();

	
	UFUNCTION(BlueprintCallable)
	bool get1wl();

	UFUNCTION(BlueprintCallable)
	bool get2wl();

	UFUNCTION(BlueprintCallable)
	bool get3wl();

	
};
