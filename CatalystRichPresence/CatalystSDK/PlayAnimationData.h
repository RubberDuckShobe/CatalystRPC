//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayAnimationData.h
// Created: Wed Mar 10 19:03:06 2021
//

#ifndef FBGEN_PlayAnimationData_H
#define FBGEN_PlayAnimationData_H

#include "AntRef.h"
#include "DataContainer.h"

class PlayAnimationData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810F80;
	}
	AntRef m_Controller; // 0x10
	bool m_Looping; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_PlayAnimationData_H
