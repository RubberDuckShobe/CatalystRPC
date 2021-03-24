//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPathLinkData.h
// Created: Wed Mar 10 19:04:16 2021
//

#ifndef FBGEN_PamPathLinkData_H
#define FBGEN_PamPathLinkData_H

#include "PathLinkType.h"
#include "Vec3.h"
#include "CustomPathLinkData.h"

class PamPathLinkData :
	public CustomPathLinkData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C8A0;
	}
	PathLinkType m_LinkType; // 0x10
	float m_ForwardSideHeight; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_ConnectLineStart; // 0x20
	Vec3 m_ConnectLineEnd; // 0x30
	float m_BackwardSideHeight; // 0x40
	float m_Depth; // 0x44
	unsigned char _0x48[0x8];
}; // size = 0x50

#endif // FBGEN_PamPathLinkData_H
