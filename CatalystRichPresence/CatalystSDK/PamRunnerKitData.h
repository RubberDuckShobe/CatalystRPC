//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunnerKitData.h
// Created: Wed Mar 10 19:04:04 2021
//

#ifndef FBGEN_PamRunnerKitData_H
#define FBGEN_PamRunnerKitData_H

#include "PamRunnerKitTypeData.h"
#include "DataContainer.h"

class PamRunnerKitData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428781E0;
	}
	PamRunnerKitTypeData* m_KitType; // 0x10
	const char* m_RewardDescriptionSid; // 0x18
}; // size = 0x20

#endif // FBGEN_PamRunnerKitData_H
