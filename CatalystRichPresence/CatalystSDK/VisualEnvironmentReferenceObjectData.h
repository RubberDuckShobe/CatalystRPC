//
// Generated with FrostbiteGen by Chod
// File: SDK\VisualEnvironmentReferenceObjectData.h
// Created: Wed Mar 10 18:59:12 2021
//

#ifndef FBGEN_VisualEnvironmentReferenceObjectData_H
#define FBGEN_VisualEnvironmentReferenceObjectData_H

#include "LogicReferenceObjectData.h"

class VisualEnvironmentReferenceObjectData :
	public LogicReferenceObjectData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821DE0;
	}
	int m_Priority; // 0xa0
	bool m_OverrideVisibility; // 0xa4
	bool m_OwnedByLightingContextPad; // 0xa5
	unsigned char _0xa6[0xa];
}; // size = 0xb0

#endif // FBGEN_VisualEnvironmentReferenceObjectData_H
