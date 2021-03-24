//
// Generated with FrostbiteGen by Chod
// File: SDK\PathLinkDataClass.h
// Created: Wed Mar 10 19:03:17 2021
//

#ifndef FBGEN_PathLinkDataClass_H
#define FBGEN_PathLinkDataClass_H

#include "PamPathLinkBinding.h"
#include "AntRef.h"
#include "DataContainer.h"

class PathLinkDataClass :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CAE0;
	}
	PamPathLinkBinding m_WaypointAnimationAntBinding; // 0x10
	AntRef m_PathLinkContextDatabase; // 0xd8
	unsigned char _0xec[0x4];
}; // size = 0xf0

#endif // FBGEN_PathLinkDataClass_H
