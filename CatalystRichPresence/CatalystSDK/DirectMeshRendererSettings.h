//
// Generated with FrostbiteGen by Chod
// File: SDK\DirectMeshRendererSettings.h
// Created: Wed Mar 10 19:07:10 2021
//

#ifndef FBGEN_DirectMeshRendererSettings_H
#define FBGEN_DirectMeshRendererSettings_H

#include "DataContainer.h"

class DirectMeshRendererSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834670;
	}
	unsigned int m_EntityChunkSize; // 0x10
	bool m_Enable; // 0x14
	unsigned char _0x15[0x3];
}; // size = 0x18

#endif // FBGEN_DirectMeshRendererSettings_H
