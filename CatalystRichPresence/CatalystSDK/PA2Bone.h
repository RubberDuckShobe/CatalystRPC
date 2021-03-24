//
// Generated with FrostbiteGen by Chod
// File: SDK\PA2Bone.h
// Created: Wed Mar 10 19:05:24 2021
//

#ifndef FBGEN_PA2Bone_H
#define FBGEN_PA2Bone_H

#include "DataContainer.h"

class PA2Bone :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A0D0;
	}
	unsigned int m_Bone; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_PA2Bone_H
