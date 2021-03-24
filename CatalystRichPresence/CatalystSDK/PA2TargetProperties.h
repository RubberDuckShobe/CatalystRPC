//
// Generated with FrostbiteGen by Chod
// File: SDK\PA2TargetProperties.h
// Created: Wed Mar 10 19:05:23 2021
//

#ifndef FBGEN_PA2TargetProperties_H
#define FBGEN_PA2TargetProperties_H

#include "Array.h"
#include "Asset.h"

class PA2TargetProperties :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A010;
	}
	Array<PA2BoneList*> m_BoneTargets; // 0x18
}; // size = 0x20

#endif // FBGEN_PA2TargetProperties_H
