//
// Generated with FrostbiteGen by Chod
// File: SDK\CityBuilderData.h
// Created: Wed Mar 10 19:08:11 2021
//

#ifndef FBGEN_CityBuilderData_H
#define FBGEN_CityBuilderData_H

#include "Array.h"
#include "Asset.h"

class CityBuilderData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872B80;
	}
	const char* m_DistributionImagePath; // 0x18
	const char* m_GlobalEntitiesDistributionImagePath; // 0x20
	const char* m_SubLevelImagePath; // 0x28
	const char* m_TransitionSectionsImagePath; // 0x30
	const char* m_RoadGridImagePath; // 0x38
	Array<BlueprintList> m_BlueprintLists; // 0x40
}; // size = 0x48

#endif // FBGEN_CityBuilderData_H
