//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFlowEntityData.h
// Created: Wed Mar 10 19:04:38 2021
//

#ifndef FBGEN_PamFlowEntityData_H
#define FBGEN_PamFlowEntityData_H

#include "Array.h"
#include "EntityData.h"

class PamFlowEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B230;
	}
	Array<PamFlowAction> m_Actions; // 0x18
	Array<int> m_BonusChain; // 0x20
	int m_Delay; // 0x28
	float m_MultiplierModeFalse; // 0x2c
	float m_MultiplierModeTrue; // 0x30
	bool m_MultiplierMode; // 0x34
	unsigned char _0x35[0x3];
}; // size = 0x38

#endif // FBGEN_PamFlowEntityData_H
