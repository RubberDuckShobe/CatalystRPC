//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundPatchPublicNode.h
// Created: Wed Mar 10 19:01:11 2021
//

#ifndef FBGEN_SoundPatchPublicNode_H
#define FBGEN_SoundPatchPublicNode_H

#include "AudioGraphNodeData.h"
struct SoundPatchPublicNode
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D05C8;
	}
	AudioGraphNodeData* m_Node; // 0x0
	unsigned int m_Id; // 0x8
	unsigned char _0xc[0x4];
}; // size = 0x10

#endif // FBGEN_SoundPatchPublicNode_H
