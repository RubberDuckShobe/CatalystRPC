//
// Generated with FrostbiteGen by Chod
// File: SDK\AutoPlayDBContainerLoaderEntityData.h
// Created: Wed Mar 10 19:08:34 2021
//

#ifndef FBGEN_AutoPlayDBContainerLoaderEntityData_H
#define FBGEN_AutoPlayDBContainerLoaderEntityData_H

#include "AutoPlaySequenceContainer.h"
#include "EntityData.h"

class AutoPlayDBContainerLoaderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BFD90;
	}
	AutoPlaySequenceContainer* m_ContainerToLoad; // 0x18
	bool m_LoadOnStart; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_AutoPlayDBContainerLoaderEntityData_H
