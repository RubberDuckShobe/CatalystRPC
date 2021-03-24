//
// Generated with FrostbiteGen by Chod
// File: SDK\DynamicTextureArraySettings.h
// Created: Wed Mar 10 19:07:05 2021
//

#ifndef FBGEN_DynamicTextureArraySettings_H
#define FBGEN_DynamicTextureArraySettings_H

#include "DataContainer.h"

class DynamicTextureArraySettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834C10;
	}
	unsigned int m_IesTextureSize; // 0x10
	unsigned int m_IesTextureArraySize; // 0x14
}; // size = 0x18

#endif // FBGEN_DynamicTextureArraySettings_H
