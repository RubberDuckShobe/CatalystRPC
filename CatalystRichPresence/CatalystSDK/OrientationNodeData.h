//
// Generated with FrostbiteGen by Chod
// File: SDK\OrientationNodeData.h
// Created: Wed Mar 10 19:05:26 2021
//

#ifndef FBGEN_OrientationNodeData_H
#define FBGEN_OrientationNodeData_H

#include "AudioGraphNodePort.h"
#include "Array.h"
#include "AudioGraphNodeData.h"

class OrientationNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8D00;
	}
	AudioGraphNodePort m_ListenerAngularVelocity; // 0x10
	Array<OrientationNodeEntry*> m_Entries; // 0x18
}; // size = 0x20

#endif // FBGEN_OrientationNodeData_H
