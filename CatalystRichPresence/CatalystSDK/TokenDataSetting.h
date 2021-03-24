//
// Generated with FrostbiteGen by Chod
// File: SDK\TokenDataSetting.h
// Created: Wed Mar 10 19:00:12 2021
//

#ifndef FBGEN_TokenDataSetting_H
#define FBGEN_TokenDataSetting_H

#include "TokenType.h"
#include "DataContainer.h"

class TokenDataSetting :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7E10;
	}
	TokenType m_TokenType; // 0x10
	unsigned int m_TokensPerTargetCount; // 0x14
	float m_LockedAfterUsedTime; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_TokenDataSetting_H
