//
// Generated with FrostbiteGen by Chod
// File: SDK\EntitlementPlatformType.h
// Created: Wed Mar 10 19:06:58 2021
//

#ifndef FBGEN_EntitlementPlatformType_H
#define FBGEN_EntitlementPlatformType_H

#include "GamePlatform.h"
#include "EntitlementType.h"
struct EntitlementPlatformType
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280F938;
	}
	GamePlatform m_Platform; // 0x0
	EntitlementType m_EntitlementType; // 0x4
}; // size = 0x8

#endif // FBGEN_EntitlementPlatformType_H
