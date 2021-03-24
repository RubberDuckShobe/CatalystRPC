//
// Generated with FrostbiteGen by Chod
// File: SDK\PA2TargetComponentData.h
// Created: Wed Mar 10 19:05:23 2021
//

#ifndef FBGEN_PA2TargetComponentData_H
#define FBGEN_PA2TargetComponentData_H

#include "PA2TargetProperties.h"
#include "GameComponentData.h"

class PA2TargetComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809FB0;
	}
	PA2TargetProperties* m_TargetProperties; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_PA2TargetComponentData_H
