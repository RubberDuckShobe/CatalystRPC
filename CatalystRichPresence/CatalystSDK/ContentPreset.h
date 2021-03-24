//
// Generated with FrostbiteGen by Chod
// File: SDK\ContentPreset.h
// Created: Wed Mar 10 19:07:33 2021
//

#ifndef FBGEN_ContentPreset_H
#define FBGEN_ContentPreset_H

#include "DataContainer.h"
#include "DataContainer.h"

class ContentPreset :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B31B0;
	}
	const char* m_ContentName; // 0x10
	const char* m_ContentType; // 0x18
	DataContainer* m_ContentParameters; // 0x20
}; // size = 0x28

#endif // FBGEN_ContentPreset_H
