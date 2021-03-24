//
// Generated with FrostbiteGen by Chod
// File: SDK\UserMusicArbiterNodeData.h
// Created: Wed Mar 10 18:59:34 2021
//

#ifndef FBGEN_UserMusicArbiterNodeData_H
#define FBGEN_UserMusicArbiterNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class UserMusicArbiterNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C88E0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
	SoundGraphPluginRef m_Plugin; // 0x20
	unsigned char _0x23[0x5];
}; // size = 0x28

#endif // FBGEN_UserMusicArbiterNodeData_H
