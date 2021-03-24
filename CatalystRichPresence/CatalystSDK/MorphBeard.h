//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphBeard.h
// Created: Wed Mar 10 19:05:48 2021
//

#ifndef FBGEN_MorphBeard_H
#define FBGEN_MorphBeard_H

#include "MeshAsset.h"
#include "DataContainer.h"

class MorphBeard :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825BB0;
	}
	MeshAsset* m_Mesh; // 0x10
}; // size = 0x18

#endif // FBGEN_MorphBeard_H
