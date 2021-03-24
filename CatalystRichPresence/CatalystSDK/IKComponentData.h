//
// Generated with FrostbiteGen by Chod
// File: SDK\IKComponentData.h
// Created: Wed Mar 10 19:06:33 2021
//

#ifndef FBGEN_IKComponentData_H
#define FBGEN_IKComponentData_H

#include "IKEffectorEnum.h"
#include "HIKData.h"
#include "GameComponentData.h"

class IKComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DF70;
	}
	IKEffectorEnum m_IKEffector; // 0x70
	HIKData m_IKData; // 0x74
	unsigned char _0x84[0xc];
}; // size = 0x90

#endif // FBGEN_IKComponentData_H
