//
// Generated with FrostbiteGen by Chod
// File: SDK\MatrixPannerNodeData.h
// Created: Wed Mar 10 19:05:58 2021
//

#ifndef FBGEN_MatrixPannerNodeData_H
#define FBGEN_MatrixPannerNodeData_H

#include "AudioGraphNodePort.h"
#include "MatrixPannerOutputChannelCount.h"
#include "AudioGraphNodeData.h"

class MatrixPannerNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9120;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_FrontLeft; // 0x18
	AudioGraphNodePort m_Center; // 0x20
	AudioGraphNodePort m_FrontRight; // 0x28
	AudioGraphNodePort m_RearLeft; // 0x30
	AudioGraphNodePort m_Lfe; // 0x38
	AudioGraphNodePort m_RearRight; // 0x40
	AudioGraphNodePort m_FarRearLeft; // 0x48
	AudioGraphNodePort m_FarRearRight; // 0x50
	AudioGraphNodePort m_Out; // 0x58
	MatrixPannerOutputChannelCount m_OutputChannelCount; // 0x60
	unsigned char _0x64[0x4];
}; // size = 0x68

#endif // FBGEN_MatrixPannerNodeData_H
