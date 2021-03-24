//
// Generated with FrostbiteGen by Chod
// File: SDK\GatewayNode.h
// Created: Wed Mar 10 19:06:39 2021
//

#ifndef FBGEN_GatewayNode_H
#define FBGEN_GatewayNode_H

#include "Vec3.h"
struct GatewayNode
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B75F8;
	}
	Vec3 m_pos; // 0x0
	int m_volume1; // 0x10
	int m_volume2; // 0x14
	unsigned char _0x18[0x8];
}; // size = 0x20

#endif // FBGEN_GatewayNode_H
