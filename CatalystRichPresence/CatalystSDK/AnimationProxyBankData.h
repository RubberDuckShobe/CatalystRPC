//
// Generated with FrostbiteGen by Chod
// File: SDK\AnimationProxyBankData.h
// Created: Wed Mar 10 19:08:45 2021
//

#ifndef FBGEN_AnimationProxyBankData_H
#define FBGEN_AnimationProxyBankData_H

#include "Realm.h"
#include "AntRef.h"
#include "EntityData.h"

class AnimationProxyBankData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818A80;
	}
	Realm m_Realm; // 0x18
	AntRef m_ProxyBank; // 0x1c
	AntRef m_ProxyBankPointer; // 0x30
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_AnimationProxyBankData_H
