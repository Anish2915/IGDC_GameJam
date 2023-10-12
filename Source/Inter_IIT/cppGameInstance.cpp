// Fill out your copyright notice in the Description page of Project Settings.


#include "cppGameInstance.h"


void UcppGameInstance::pushrecordcpp(bool wl, int timeh, int timem, FString name)
{
	record A;
	A.name = name;
	A.time_h = timeh;
	A.time_m = timem;
	A.win = wl;
	recordvec.push_back(A);
	std::sort(recordvec.begin(), recordvec.end());
}

FString UcppGameInstance::getrec1name()
{
	if (recordvec.size() <1) {
		return FString("-");
	}
	return recordvec[0].name ;
}

FString UcppGameInstance::getrec2name()
{
	if (recordvec.size() < 2) {
		return FString("-");
	}
	return recordvec[1].name;
}

FString UcppGameInstance::getrec3name()
{
	if (recordvec.size() < 3) {
		return FString("-");
	}
	return recordvec[2].name;
}

int UcppGameInstance::get1timeh()
{
	if (recordvec.size() < 1) return 0;
	return recordvec[0].time_h;
}

int UcppGameInstance::get2timeh()
{
	if (recordvec.size() < 2) return 0;
	return recordvec[1].time_h;
}

int UcppGameInstance::get3timeh()
{
	if (recordvec.size() < 3) return 0;
	return recordvec[2].time_h;
}

int UcppGameInstance::get1timem()
{
	if (recordvec.size() < 1) return 0;
	return recordvec[0].time_m;
}

int UcppGameInstance::get2timem()
{
	if (recordvec.size() < 2) return 0;
	return recordvec[1].time_m;
}

int UcppGameInstance::get3timem()
{
	if (recordvec.size() < 3) return 0;
	return recordvec[2].time_m;
}

bool UcppGameInstance::get1wl()
{
	if (recordvec.size() < 1) return 0;
	return recordvec[0].win;
}

bool UcppGameInstance::get2wl()
{
	if (recordvec.size() < 2) return 0;
	return recordvec[1].win;
}

bool UcppGameInstance::get3wl()
{
	if (recordvec.size() < 3) return 0;
	return recordvec[2].win;
}
