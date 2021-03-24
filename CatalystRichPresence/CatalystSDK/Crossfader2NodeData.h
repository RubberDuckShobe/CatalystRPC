//
// Generated with FrostbiteGen by Chod
// File: SDK\Crossfader2NodeData.h
// Created: Wed Mar 10 19:07:28 2021
//

#ifndef FBGEN_Crossfader2NodeData_H
#define FBGEN_Crossfader2NodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class Crossfader2NodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3770;
	}
	AudioGraphNodePort m_Ctrl; // 0x10
	AudioGraphNodePort m_CtrlOut1; // 0x18
	AudioGraphNodePort m_CtrlOut2; // 0x20
}; // size = 0x28

#endif // FBGEN_Crossfader2NodeData_H
