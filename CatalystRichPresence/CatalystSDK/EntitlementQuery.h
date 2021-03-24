//
// Generated with FrostbiteGen by Chod
// File: SDK\EntitlementQuery.h
// Created: Wed Mar 10 19:06:58 2021
//

#ifndef FBGEN_EntitlementQuery_H
#define FBGEN_EntitlementQuery_H

#include "Array.h"
#include "GamePlatform.h"
#include "Asset.h"

class EntitlementQuery :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811100;
	}
	Array<EntitlementData> m_EntitlementsData; // 0x18
	Array<const char*> m_GroupNames; // 0x20
	GamePlatform m_Platform; // 0x28
	unsigned char _0x2c[0x4];
	const char* m_EntitlementTag; // 0x30
	const char* m_ProductId; // 0x38
	const char* m_ProjectId; // 0x40
}; // size = 0x48

#endif // FBGEN_EntitlementQuery_H
