//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsEntry.h
// Created: Wed Mar 10 19:03:09 2021
//

#ifndef FBGEN_PhysicsEntry_H
#define FBGEN_PhysicsEntry_H

#include "AudioGraphNodePort.h"
#include "OutputNodeData.h"
#include "AudioGraphNodePortGroup.h"

class PhysicsEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8C40;
	}
	AudioGraphNodePort m_Distance; // 0x10
	AudioGraphNodePort m_Azimuth; // 0x18
	AudioGraphNodePort m_ElevationAngle; // 0x20
	OutputNodeData* m_Output; // 0x28
}; // size = 0x30

#endif // FBGEN_PhysicsEntry_H
