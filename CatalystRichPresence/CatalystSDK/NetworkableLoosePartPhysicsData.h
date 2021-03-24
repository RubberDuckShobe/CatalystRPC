//
// Generated with FrostbiteGen by Chod
// File: SDK\NetworkableLoosePartPhysicsData.h
// Created: Wed Mar 10 19:05:33 2021
//

#ifndef FBGEN_NetworkableLoosePartPhysicsData_H
#define FBGEN_NetworkableLoosePartPhysicsData_H

#include "LoosePartPhysicsData.h"

class NetworkableLoosePartPhysicsData :
	public LoosePartPhysicsData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816BC0;
	}
	bool m_Networked; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_NetworkableLoosePartPhysicsData_H
