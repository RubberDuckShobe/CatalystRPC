//
// Generated with FrostbiteGen by Chod
// File: SDK\StreamPoolPreset.h
// Created: Wed Mar 10 19:00:51 2021
//

#ifndef FBGEN_StreamPoolPreset_H
#define FBGEN_StreamPoolPreset_H

#include "Array.h"
#include "DataContainer.h"

class StreamPoolPreset :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0EF0;
	}
	Array<StreamPoolMapping*> m_Mappings; // 0x10
}; // size = 0x18

#endif // FBGEN_StreamPoolPreset_H
