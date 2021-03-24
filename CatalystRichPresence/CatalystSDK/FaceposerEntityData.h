//
// Generated with FrostbiteGen by Chod
// File: SDK\FaceposerEntityData.h
// Created: Wed Mar 10 19:06:50 2021
//

#ifndef FBGEN_FaceposerEntityData_H
#define FBGEN_FaceposerEntityData_H

#include "AntRef.h"
#include "EntityData.h"

class FaceposerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811040;
	}
	AntRef m_FacePoserLibrary; // 0x18
	bool m_SetFacePoserLibraryOnSpawn; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_FaceposerEntityData_H
