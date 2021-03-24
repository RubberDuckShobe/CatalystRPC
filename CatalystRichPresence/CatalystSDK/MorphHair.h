//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphHair.h
// Created: Wed Mar 10 19:05:48 2021
//

#ifndef FBGEN_MorphHair_H
#define FBGEN_MorphHair_H

#include "MeshAsset.h"
#include "DataContainer.h"

class MorphHair :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825C10;
	}
	MeshAsset* m_Mesh; // 0x10
}; // size = 0x18

#endif // FBGEN_MorphHair_H
