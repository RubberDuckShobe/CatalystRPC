//
// Generated with FrostbiteGen by Chod
// File: SDK\BoidsWeightedConnectionData.h
// Created: Wed Mar 10 19:08:27 2021
//

#ifndef FBGEN_BoidsWeightedConnectionData_H
#define FBGEN_BoidsWeightedConnectionData_H

#include "BoidsNetworkNodeEntityData.h"
struct BoidsWeightedConnectionData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894470;
	}
	BoidsNetworkNodeEntityData* m_Target; // 0x0
	unsigned short m_Weight; // 0x8
	unsigned char _0xa[0x6];
}; // size = 0x10

#endif // FBGEN_BoidsWeightedConnectionData_H
