//
// Generated with FrostbiteGen by Chod
// File: SDK\BusNodeData.h
// Created: Wed Mar 10 19:08:22 2021
//

#ifndef FBGEN_BusNodeData_H
#define FBGEN_BusNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "SoundBusData.h"

class BusNodeData :
	public SoundBusData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9A80;
	}
	AudioGraphNodePort m_Out; // 0x20
	SoundGraphPluginRef m_VuPlugin; // 0x28
	unsigned char _0x2b[0x5];
}; // size = 0x30

#endif // FBGEN_BusNodeData_H
