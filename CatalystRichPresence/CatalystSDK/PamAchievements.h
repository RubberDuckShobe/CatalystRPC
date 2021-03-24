//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAchievements.h
// Created: Wed Mar 10 19:05:09 2021
//

#ifndef FBGEN_PamAchievements_H
#define FBGEN_PamAchievements_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamAchievements :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142879200;
	}
	Array<PamAchievementData*> m_Achievements; // 0x18
}; // size = 0x20

#endif // FBGEN_PamAchievements_H
