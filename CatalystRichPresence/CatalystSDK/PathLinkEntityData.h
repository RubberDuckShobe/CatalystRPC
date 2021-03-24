//
// Generated with FrostbiteGen by Chod
// File: SDK\PathLinkEntityData.h
// Created: Wed Mar 10 19:03:17 2021
//

#ifndef FBGEN_PathLinkEntityData_H
#define FBGEN_PathLinkEntityData_H

#include "Array.h"
#include "PathLinkDirection.h"
#include "LinkDat.h"
#include "SpatialEntityData.h"

class PathLinkEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142828DD0;
	}
	Array<Vec3> m_Points; // 0x60
	PathLinkDirection m_Direction; // 0x68
	unsigned char _0x6c[0x4];
	LinkDat* m_LinkDat; // 0x70
	bool m_ActiveAtStart; // 0x78
	bool m_DeferredCreation; // 0x79
	unsigned char _0x7a[0x6];
}; // size = 0x80

#endif // FBGEN_PathLinkEntityData_H
