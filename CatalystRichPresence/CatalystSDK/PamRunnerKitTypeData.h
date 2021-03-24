//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunnerKitTypeData.h
// Created: Wed Mar 10 19:04:03 2021
//

#ifndef FBGEN_PamRunnerKitTypeData_H
#define FBGEN_PamRunnerKitTypeData_H

#include "ObjectVariation.h"
#include "DataContainer.h"

class PamRunnerKitTypeData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878240;
	}
	const char* m_DisplayName; // 0x10
	const char* m_DisplayNameSid; // 0x18
	ObjectVariation* m_ObjectVariation; // 0x20
}; // size = 0x28

#endif // FBGEN_PamRunnerKitTypeData_H
