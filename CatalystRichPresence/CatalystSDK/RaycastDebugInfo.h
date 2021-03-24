//
// Generated with FrostbiteGen by Chod
// File: SDK\RaycastDebugInfo.h
// Created: Wed Mar 10 19:02:42 2021
//

#ifndef FBGEN_RaycastDebugInfo_H
#define FBGEN_RaycastDebugInfo_H

#include "Array.h"
struct RaycastDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7698;
	}
	Array<RaycastInstanceDebugInfo> m_RayCasts; // 0x0
	Array<BoxOverlapInstanceDebugInfo> m_BoxOverlaps; // 0x8
	Array<SphereOverlapInstanceDebugInfo> m_SphereOverlaps; // 0x10
}; // size = 0x18

#endif // FBGEN_RaycastDebugInfo_H
