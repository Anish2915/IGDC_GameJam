// Copyright Epic Games, Inc. All Rights Reserved.

#include "Inter_IITGameMode.h"
#include "Inter_IITCharacter.h"
#include <cstdlib>
#include <algorithm>

#include "UObject/ConstructorHelpers.h"

//std::map<int, std::set<int>>mp;
//set<int> temp = {1,2};
//vector<vector<int>> mp;
//vector<int>
//mp.push_back();




AInter_IITGameMode::AInter_IITGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;
	
	gs[1].insert({ 2 });
	gs[2].insert({ 5,3,1 });
	gs[3].insert({ 4,2 });
	gs[4].insert({ 10,3 });
	gs[5].insert({ 6,2 });
	gs[6].insert({ 7,5 });
	gs[7].insert({ 9,8 });
	gs[8].insert({ 10,7 });
	gs[9].insert({ 7 });
	gs[10].insert({ 11,8,4 });
	gs[11].insert({ 10 });
	cs[0].insert({ 3 });
	cs[1].insert({ 11 });
	cs[2].insert({ 7,6 });
	cs[3].insert({ 4 });
	cs[4].insert({ 1 });
	cs[5].insert({ 8 });
}

void AInter_IITGameMode::doorclosecpp(int a, int b)
{
	gs[a].erase(b);
	gs[b].erase(a);
}

void AInter_IITGameMode::dooropencpp(int a, int b)
{
	if (a == -1) return;
	gs[a].insert(b);
	gs[b].insert(a);
}

int AInter_IITGameMode::ghostwalkcpp(int ghostLoc, int camLoc)
{
	if(camLoc==-1){
		if (gs[ghostLoc].empty()) return-1;
		return *gs[ghostLoc].begin();
	}
	else if (cs[camLoc].find(ghostLoc) == cs[camLoc].end()) {
		for (auto itr : gs[ghostLoc])
		{
			if (cs[camLoc].find(itr) == cs[camLoc].end()) {
				return itr;
			}
			
		}

	}
	return -1;
}

int AInter_IITGameMode::randomGhostWalkcpp(int camLoc)
{
	set<int> tempc = {2,3,8};
	set<int> t;
	std::set_difference(tempc.begin(),tempc.end(),cs[camLoc].begin(),cs[camLoc].end(),inserter(t,end(t)));
	int x = rand() % t.size();
	auto it = t.begin();
	std::advance(it, x);
	return *it;
}
