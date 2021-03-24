//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraCutVisibilityKeyframe.h
// Created: Wed Mar 10 19:08:21 2021
//

#ifndef FBGEN_CameraCutVisibilityKeyframe_H
#define FBGEN_CameraCutVisibilityKeyframe_H

#include "Array.h"
#include "DataContainer.h"

class CameraCutVisibilityKeyframe :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BFB50;
	}
	float m_Time; // 0x10
	unsigned char _0x14[0x4];
	Array<Guid> m_GuidChain; // 0x18
}; // size = 0x20

#endif // FBGEN_CameraCutVisibilityKeyframe_H
