//
// Generated with FrostbiteGen by Chod
// File: SDK\AnimationSpawnTemplate.h
// Created: Wed Mar 10 19:08:44 2021
//

#ifndef FBGEN_AnimationSpawnTemplate_H
#define FBGEN_AnimationSpawnTemplate_H

#include "AntEnumeration.h"
#include "DataContainer.h"

class AnimationSpawnTemplate :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820D30;
	}
	AntEnumeration* m_RunStyle; // 0x10
}; // size = 0x18

#endif // FBGEN_AnimationSpawnTemplate_H
