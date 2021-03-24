//
// Generated with FrostbiteGen by Chod
// File: SDK\VisualEnvironmentBlueprint.h
// Created: Wed Mar 10 18:59:13 2021
//

#ifndef FBGEN_VisualEnvironmentBlueprint_H
#define FBGEN_VisualEnvironmentBlueprint_H

#include "TimeDeltaType.h"
#include "ObjectBlueprint.h"

class VisualEnvironmentBlueprint :
	public ObjectBlueprint // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821EA0;
	}
	TimeDeltaType m_TimeDeltaType; // 0x48
	unsigned char _0x4c[0x4];
}; // size = 0x50

#endif // FBGEN_VisualEnvironmentBlueprint_H
