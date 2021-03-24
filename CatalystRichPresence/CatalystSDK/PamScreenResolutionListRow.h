//
// Generated with FrostbiteGen by Chod
// File: SDK\PamScreenResolutionListRow.h
// Created: Wed Mar 10 19:04:02 2021
//

#ifndef FBGEN_PamScreenResolutionListRow_H
#define FBGEN_PamScreenResolutionListRow_H

#include "PamListRow.h"

class PamScreenResolutionListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A940;
	}
	int m_Width; // 0x18
	int m_Height; // 0x1c
	float m_RefreshRate; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PamScreenResolutionListRow_H
