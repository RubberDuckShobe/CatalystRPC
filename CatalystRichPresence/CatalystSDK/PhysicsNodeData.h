//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsNodeData.h
// Created: Wed Mar 10 19:03:09 2021
//

#ifndef FBGEN_PhysicsNodeData_H
#define FBGEN_PhysicsNodeData_H

#include "AudioGraphNodePort.h"
#include "Array.h"
#include "AudioGraphNodeData.h"

class PhysicsNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8B80;
	}
	AudioGraphNodePort m_Distance; // 0x10
	AudioGraphNodePort m_Velocity; // 0x18
	AudioGraphNodePort m_RelativeVelocity; // 0x20
	AudioGraphNodePort m_Azimuth; // 0x28
	AudioGraphNodePort m_ElevationAngle; // 0x30
	Array<PhysicsEntry*> m_Entries; // 0x38
}; // size = 0x40

#endif // FBGEN_PhysicsNodeData_H
