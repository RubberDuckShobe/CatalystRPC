//
// Generated with FrostbiteGen by Chod
// File: SDK\ObjectsNodeData.h
// Created: Wed Mar 10 19:05:30 2021
//

#ifndef FBGEN_ObjectsNodeData_H
#define FBGEN_ObjectsNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundBusPatchAsset.h"
#include "AudioGraphNodeData.h"

class ObjectsNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8FA0;
	}
	AudioGraphNodePort m_Enable; // 0x10
	AudioGraphNodePort m_Amplitude; // 0x18
	AudioGraphNodePort m_IsAtmosSupported; // 0x20
	unsigned int m_MaxObjectCount; // 0x28
	float m_BedClampingDistance; // 0x2c
	float m_CoordinateSpaceHorizontalSize; // 0x30
	float m_CoordinateSpaceVerticalSize; // 0x34
	SoundBusPatchAsset* m_DefaultObjectPatch; // 0x38
}; // size = 0x40

#endif // FBGEN_ObjectsNodeData_H
