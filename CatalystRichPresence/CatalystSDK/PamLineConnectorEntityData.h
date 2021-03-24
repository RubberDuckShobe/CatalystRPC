//
// Generated with FrostbiteGen by Chod
// File: SDK\PamLineConnectorEntityData.h
// Created: Wed Mar 10 19:04:26 2021
//

#ifndef FBGEN_PamLineConnectorEntityData_H
#define FBGEN_PamLineConnectorEntityData_H

#include "SpatialEntityData.h"

class PamLineConnectorEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884D40;
	}
	bool m_Enabled; // 0x60
	unsigned char _0x61[0xf];
}; // size = 0x70

#endif // FBGEN_PamLineConnectorEntityData_H
