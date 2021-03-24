//
// Generated with FrostbiteGen by Chod
// File: SDK\UserMusicControllerNodeData.h
// Created: Wed Mar 10 18:59:33 2021
//

#ifndef FBGEN_UserMusicControllerNodeData_H
#define FBGEN_UserMusicControllerNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class UserMusicControllerNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8880;
	}
	AudioGraphNodePort m_Override; // 0x10
	AudioGraphNodePort m_Restore; // 0x18
	bool m_RestoreOnDeactivated; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_UserMusicControllerNodeData_H
