//
// Generated with FrostbiteGen by Chod
// File: SDK\ConnectivityEntityData.h
// Created: Wed Mar 10 19:07:33 2021
//

#ifndef FBGEN_ConnectivityEntityData_H
#define FBGEN_ConnectivityEntityData_H

#include "Array.h"
#include "EntityData.h"

class ConnectivityEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D7200;
	}
	Array<int> m_BreakableModelEventIds; // 0x18
	Array<int> m_StaticModelEventIds; // 0x20
	Array<unsigned int> m_StaticModelFirstIndices; // 0x28
	Array<StaticModelToBreakableParts> m_StaticModelToBreakablePartsArray; // 0x30
	Array<BreakablePartToStaticEntityPart> m_BreakablePartToStaticModelPartArray; // 0x38
	float m_BreakableModelExtraRadius; // 0x40
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_ConnectivityEntityData_H
