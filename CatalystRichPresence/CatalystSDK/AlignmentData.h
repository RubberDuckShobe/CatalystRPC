//
// Generated with FrostbiteGen by Chod
// File: SDK\AlignmentData.h
// Created: Wed Mar 10 19:08:47 2021
//

#ifndef FBGEN_AlignmentData_H
#define FBGEN_AlignmentData_H

#include "DataContainer.h"

class AlignmentData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E390;
	}
	int m_AlignAction; // 0x10
	float m_StopTolerance; // 0x14
	float m_Speed; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_AlignmentData_H
