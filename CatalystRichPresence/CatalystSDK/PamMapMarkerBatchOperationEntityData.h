//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapMarkerBatchOperationEntityData.h
// Created: Wed Mar 10 19:04:24 2021
//

#ifndef FBGEN_PamMapMarkerBatchOperationEntityData_H
#define FBGEN_PamMapMarkerBatchOperationEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamMapMarkerBatchOperationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880E90;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_Tags; // 0x20
	bool m_MatchAll; // 0x28
	bool m_IgnoreDistrictUnlock; // 0x29
	unsigned char _0x2a[0x6];
}; // size = 0x30

#endif // FBGEN_PamMapMarkerBatchOperationEntityData_H
