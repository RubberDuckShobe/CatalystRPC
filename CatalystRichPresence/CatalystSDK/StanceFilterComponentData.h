//
// Generated with FrostbiteGen by Chod
// File: SDK\StanceFilterComponentData.h
// Created: Wed Mar 10 19:00:58 2021
//

#ifndef FBGEN_StanceFilterComponentData_H
#define FBGEN_StanceFilterComponentData_H

#include "Array.h"
#include "GameComponentData.h"

class StanceFilterComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E5D0;
	}
	Array<int> m_ValidStances; // 0x70
	float m_StanceChangeTime; // 0x78
	unsigned char _0x7c[0x4];
	Array<ActionSuppressor> m_ActionsToFilter; // 0x80
	bool m_UndoParentStanceFilter; // 0x88
	bool m_FilterSpecificActions; // 0x89
	unsigned char _0x8a[0x6];
}; // size = 0x90

#endif // FBGEN_StanceFilterComponentData_H
