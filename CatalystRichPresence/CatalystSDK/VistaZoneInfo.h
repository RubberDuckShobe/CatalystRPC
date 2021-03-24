//
// Generated with FrostbiteGen by Chod
// File: SDK\VistaZoneInfo.h
// Created: Wed Mar 10 18:59:14 2021
//

#ifndef FBGEN_VistaZoneInfo_H
#define FBGEN_VistaZoneInfo_H

#include "Array.h"
struct VistaZoneInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289F898;
	}
	Array<short> m_Neighbours; // 0x0
	Array<VistaZoneMeshInfo> m_Objects; // 0x8
}; // size = 0x10

#endif // FBGEN_VistaZoneInfo_H
