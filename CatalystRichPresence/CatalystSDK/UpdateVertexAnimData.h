//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateVertexAnimData.h
// Created: Wed Mar 10 18:59:34 2021
//

#ifndef FBGEN_UpdateVertexAnimData_H
#define FBGEN_UpdateVertexAnimData_H

#include "VertexShaderFragmentAsset.h"
#include "Vec4.h"
#include "ProcessorData.h"

class UpdateVertexAnimData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB000;
	}
	VertexShaderFragmentAsset* m_ShaderFragment; // 0x30
	float m_PerParticleRandomness; // 0x38
	unsigned char _0x3c[0x4];
	Vec4 m_AnimationParameters; // 0x40
	float m_FrequencyMultiplier; // 0x50
	unsigned char _0x54[0xc];
}; // size = 0x60

#endif // FBGEN_UpdateVertexAnimData_H
