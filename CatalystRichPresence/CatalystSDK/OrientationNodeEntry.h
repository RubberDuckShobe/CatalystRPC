//
// Generated with FrostbiteGen by Chod
// File: SDK\OrientationNodeEntry.h
// Created: Wed Mar 10 19:05:26 2021
//

#ifndef FBGEN_OrientationNodeEntry_H
#define FBGEN_OrientationNodeEntry_H

#include "AudioGraphNodePort.h"
#include "OutputNodeData.h"
#include "AudioGraphNodePortGroup.h"

class OrientationNodeEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8D60;
	}
	AudioGraphNodePort m_ListenerRelativeYaw; // 0x10
	AudioGraphNodePort m_ListenerRelativePitch; // 0x18
	AudioGraphNodePort m_ListenerRelativeRoll; // 0x20
	AudioGraphNodePort m_ListenerRelativeAngle; // 0x28
	AudioGraphNodePort m_ListenerFovRelativeAngle; // 0x30
	AudioGraphNodePort m_TowardsListenerAngle; // 0x38
	OutputNodeData* m_Output; // 0x40
}; // size = 0x48

#endif // FBGEN_OrientationNodeEntry_H
