//
// Generated with FrostbiteGen by Chod
// File: SDK\ProxyPropertyContainer.h
// Created: Wed Mar 10 19:02:48 2021
//

#ifndef FBGEN_ProxyPropertyContainer_H
#define FBGEN_ProxyPropertyContainer_H

#include "Realm.h"
struct ProxyPropertyContainer
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1900;
	}
	Realm m_TargetRealm; // 0x0
	int m_TargetFieldId; // 0x4
	unsigned int m_PropertyTypeHash; // 0x8
}; // size = 0xc

#endif // FBGEN_ProxyPropertyContainer_H
