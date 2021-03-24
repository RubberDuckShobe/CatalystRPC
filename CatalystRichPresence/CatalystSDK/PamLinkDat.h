//
// Generated with FrostbiteGen by Chod
// File: SDK\PamLinkDat.h
// Created: Wed Mar 10 19:04:26 2021
//

#ifndef FBGEN_PamLinkDat_H
#define FBGEN_PamLinkDat_H

#include "PamPathLinkData.h"
#include "LinkDat.h"

class PamLinkDat :
	public LinkDat // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C840;
	}
	PamPathLinkData* m_LinkData; // 0x48
}; // size = 0x50

#endif // FBGEN_PamLinkDat_H
