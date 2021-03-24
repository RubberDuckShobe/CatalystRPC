//
// Generated with FrostbiteGen by Chod
// File: SDK\PathLinkAnimationBinding.h
// Created: Wed Mar 10 19:03:17 2021
//

#ifndef FBGEN_PathLinkAnimationBinding_H
#define FBGEN_PathLinkAnimationBinding_H

#include "PathLinkRuntimeType.h"
#include "Vec3.h"
#include "DataContainer.h"

class PathLinkAnimationBinding :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C7E0;
	}
	PathLinkRuntimeType m_LinkType; // 0x10
	int m_AnimationType; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_ConnectLineStart; // 0x20
	Vec3 m_ConnectLineEnd; // 0x30
}; // size = 0x40

#endif // FBGEN_PathLinkAnimationBinding_H
