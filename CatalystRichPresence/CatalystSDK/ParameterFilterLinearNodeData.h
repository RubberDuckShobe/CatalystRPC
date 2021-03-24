//
// Generated with FrostbiteGen by Chod
// File: SDK\ParameterFilterLinearNodeData.h
// Created: Wed Mar 10 19:03:19 2021
//

#ifndef FBGEN_ParameterFilterLinearNodeData_H
#define FBGEN_ParameterFilterLinearNodeData_H

#include "AudioGraphNodePort.h"
#include "ParameterFilterLinearNodeVersion.h"
#include "AudioGraphNodeData.h"

class ParameterFilterLinearNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2870;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
	AudioGraphNodePort m_AttackSpeed; // 0x20
	AudioGraphNodePort m_ReleaseSpeed; // 0x28
	ParameterFilterLinearNodeVersion m_Version; // 0x30
	float m_DefaultOutputValue; // 0x34
	bool m_KeepActive; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_ParameterFilterLinearNodeData_H
