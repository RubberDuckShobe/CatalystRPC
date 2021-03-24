//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMoveSequenceTrackerEntityData.h
// Created: Wed Mar 10 19:04:22 2021
//

#ifndef FBGEN_PamMoveSequenceTrackerEntityData_H
#define FBGEN_PamMoveSequenceTrackerEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "AntRef.h"
#include "Array.h"
#include "EntityData.h"

class PamMoveSequenceTrackerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287DF80;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_PlayerTransform; // 0x20
	AntRef m_MoveEnumAsset; // 0x60
	unsigned char _0x74[0x4];
	Array<PamMoveSequence> m_MoveSequences; // 0x78
	int m_CurrentMove; // 0x80
	bool m_Enabled; // 0x84
	unsigned char _0x85[0xb];
}; // size = 0x90

#endif // FBGEN_PamMoveSequenceTrackerEntityData_H
