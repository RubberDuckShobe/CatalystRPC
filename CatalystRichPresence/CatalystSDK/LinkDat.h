//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkDat.h
// Created: Wed Mar 10 19:06:15 2021
//

#ifndef FBGEN_LinkDat_H
#define FBGEN_LinkDat_H

#include "NavLinkType.h"
#include "CustomPathLinkData.h"
#include "LinkFlowTune.h"
#include "DataContainer.h"

class LinkDat :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142828E30;
	}
	unsigned int m_LayerMask; // 0x10
	NavLinkType m_LinkType; // 0x14
	unsigned int m_LinkUsageFlags; // 0x18
	float m_PenaltyMult; // 0x1c
	float m_MaxSnapDist; // 0x20
	float m_MayUseDist; // 0x24
	float m_MustUseDist; // 0x28
	unsigned char _0x2c[0x4];
	CustomPathLinkData* m_UserData; // 0x30
	LinkFlowTune* m_LinkFlowTune; // 0x38
	bool m_StopToUseLink; // 0x40
	unsigned char _0x41[0x7];
}; // size = 0x48

#endif // FBGEN_LinkDat_H
