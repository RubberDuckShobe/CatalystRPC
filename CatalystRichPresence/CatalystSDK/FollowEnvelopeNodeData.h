//
// Generated with FrostbiteGen by Chod
// File: SDK\FollowEnvelopeNodeData.h
// Created: Wed Mar 10 19:06:44 2021
//

#ifndef FBGEN_FollowEnvelopeNodeData_H
#define FBGEN_FollowEnvelopeNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class FollowEnvelopeNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D32F0;
	}
	AudioGraphNodePort m_X; // 0x10
	AudioGraphNodePort m_Y; // 0x18
	float m_Base; // 0x20
	float m_Scale; // 0x24
	float m_Pivot; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_FollowEnvelopeNodeData_H
