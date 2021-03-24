//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionPurchaseEntityData.h
// Created: Wed Mar 10 19:04:10 2021
//

#ifndef FBGEN_PamProgressionPurchaseEntityData_H
#define FBGEN_PamProgressionPurchaseEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamProgressionPurchaseEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872F40;
	}
	Realm m_Realm; // 0x18
	int m_AvailableCurrency; // 0x1c
	int m_ProgressionFlagName; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PamProgressionPurchaseEntityData_H
