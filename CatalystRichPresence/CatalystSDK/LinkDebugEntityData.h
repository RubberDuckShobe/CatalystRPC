//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkDebugEntityData.h
// Created: Wed Mar 10 19:06:15 2021
//

#ifndef FBGEN_LinkDebugEntityData_H
#define FBGEN_LinkDebugEntityData_H

#include "Realm.h"
#include "EntityData.h"

class LinkDebugEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820190;
	}
	Realm m_Realm; // 0x18
	unsigned int m_MaxResolvedLinkDebugs; // 0x1c
	unsigned int m_ExpectedTargetDataCountInRuntime; // 0x20
	unsigned int m_ExpectedTargetInstanceCountInRuntime; // 0x24
	bool m_PipelineTestEnabled; // 0x28
	bool m_TestOnInit; // 0x29
	bool m_ExpectAllTargetsToBeResolvableFromSource; // 0x2a
	bool m_ExpectAllTargetsToBeInSameSubLevel; // 0x2b
	bool m_ExpectAllTargetsToBeImmutable; // 0x2c
	bool m_ExpectAllTargetsToBeDynamic; // 0x2d
	unsigned char _0x2e[0x2];
}; // size = 0x30

#endif // FBGEN_LinkDebugEntityData_H
