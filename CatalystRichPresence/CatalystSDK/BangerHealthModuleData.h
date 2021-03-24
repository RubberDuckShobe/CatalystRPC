//
// Generated with FrostbiteGen by Chod
// File: SDK\BangerHealthModuleData.h
// Created: Wed Mar 10 19:08:33 2021
//

#ifndef FBGEN_BangerHealthModuleData_H
#define FBGEN_BangerHealthModuleData_H

#include "MaterialDecl.h"
#include "GameComponentData.h"

class BangerHealthModuleData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142804620;
	}
	float m_Health; // 0x70
	MaterialDecl m_MaterialPair; // 0x74
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_BangerHealthModuleData_H
