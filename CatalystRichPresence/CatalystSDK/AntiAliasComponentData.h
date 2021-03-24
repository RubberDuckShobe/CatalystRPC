//
// Generated with FrostbiteGen by Chod
// File: SDK\AntiAliasComponentData.h
// Created: Wed Mar 10 19:08:42 2021
//

#ifndef FBGEN_AntiAliasComponentData_H
#define FBGEN_AntiAliasComponentData_H

#include "Realm.h"
#include "VisualEnvironmentComponentData.h"

class AntiAliasComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428465E0;
	}
	Realm m_Realm; // 0x80
	float m_DisocclusionRejectionFactor; // 0x84
	bool m_Enable; // 0x88
	unsigned char _0x89[0x7];
}; // size = 0x90

#endif // FBGEN_AntiAliasComponentData_H
