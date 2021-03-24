//
// Generated with FrostbiteGen by Chod
// File: SDK\PA2BoneList.h
// Created: Wed Mar 10 19:05:24 2021
//

#ifndef FBGEN_PA2BoneList_H
#define FBGEN_PA2BoneList_H

#include "Array.h"
#include "DataContainer.h"

class PA2BoneList :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A070;
	}
	Array<PA2Bone*> m_Bones; // 0x10
}; // size = 0x18

#endif // FBGEN_PA2BoneList_H
