//
// Generated with FrostbiteGen by Chod
// File: SDK\VistaZoneMeshInfo.h
// Created: Wed Mar 10 18:59:14 2021
//

#ifndef FBGEN_VistaZoneMeshInfo_H
#define FBGEN_VistaZoneMeshInfo_H

#include "LinearTransform.h"
#include "ObjectBlueprint.h"
struct VistaZoneMeshInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289F8B8;
	}
	LinearTransform m_Transform; // 0x0
	ObjectBlueprint* m_Object; // 0x40
	unsigned char _0x48[0x8];
}; // size = 0x50

#endif // FBGEN_VistaZoneMeshInfo_H
