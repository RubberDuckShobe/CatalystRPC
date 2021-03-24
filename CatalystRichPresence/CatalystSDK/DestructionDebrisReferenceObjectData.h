//
// Generated with FrostbiteGen by Chod
// File: SDK\DestructionDebrisReferenceObjectData.h
// Created: Wed Mar 10 19:07:14 2021
//

#ifndef FBGEN_DestructionDebrisReferenceObjectData_H
#define FBGEN_DestructionDebrisReferenceObjectData_H

#include "DebrisInsertType.h"
#include "QualityScalableInt.h"
#include "SpatialReferenceObjectData.h"

class DestructionDebrisReferenceObjectData :
	public SpatialReferenceObjectData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282D040;
	}
	DebrisInsertType m_InsertType; // 0xa0
	float m_Gap; // 0xa4
	QualityScalableInt m_MaxPieceCount; // 0xa8
	unsigned int m_RandomSeed; // 0xb8
	unsigned char _0xbc[0x4];
}; // size = 0xc0

#endif // FBGEN_DestructionDebrisReferenceObjectData_H
