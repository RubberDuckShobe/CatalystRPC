//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicInputData.h
// Created: Wed Mar 10 19:05:42 2021
//

#ifndef FBGEN_MusicInputData_H
#define FBGEN_MusicInputData_H

#include "DataContainer.h"

class MusicInputData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7920;
	}
	const char* m_Name; // 0x10
	unsigned int m_NameHash; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_MusicInputData_H
