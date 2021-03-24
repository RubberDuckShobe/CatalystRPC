//
// Generated with FrostbiteGen by Chod
// File: SDK\Vec3ListAsset.h
// Created: Wed Mar 10 18:59:29 2021
//

#ifndef FBGEN_Vec3ListAsset_H
#define FBGEN_Vec3ListAsset_H

#include "Array.h"
#include "ConfigListAsset.h"

class Vec3ListAsset :
	public ConfigListAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899DA0;
	}
	Array<Vec3Data> m_Vec3Types; // 0x18
}; // size = 0x20

#endif // FBGEN_Vec3ListAsset_H
