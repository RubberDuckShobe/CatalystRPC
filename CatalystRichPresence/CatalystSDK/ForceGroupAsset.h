//
// Generated with FrostbiteGen by Chod
// File: SDK\ForceGroupAsset.h
// Created: Wed Mar 10 19:06:43 2021
//

#ifndef FBGEN_ForceGroupAsset_H
#define FBGEN_ForceGroupAsset_H

#include "Asset.h"

class ForceGroupAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EAE00;
	}
	bool m_MeshScattering; // 0x18
	bool m_Vegetation; // 0x19
	bool m_Effects; // 0x1a
	bool m_Cloth; // 0x1b
	bool m_Physics; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_ForceGroupAsset_H
