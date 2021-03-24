//
// Generated with FrostbiteGen by Chod
// File: SDK\IrReverbControllerNodeData.h
// Created: Wed Mar 10 19:06:25 2021
//

#ifndef FBGEN_IrReverbControllerNodeData_H
#define FBGEN_IrReverbControllerNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class IrReverbControllerNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8AC0;
	}
	AudioGraphNodePort m_Reverb0; // 0x10
	AudioGraphNodePort m_Amplitude0; // 0x18
	AudioGraphNodePort m_Reverb1; // 0x20
	AudioGraphNodePort m_Amplitude1; // 0x28
	bool m_NormalizeGain; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_IrReverbControllerNodeData_H
