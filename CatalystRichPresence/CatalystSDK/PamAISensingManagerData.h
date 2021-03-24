//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAISensingManagerData.h
// Created: Wed Mar 10 19:05:18 2021
//

#ifndef FBGEN_PamAISensingManagerData_H
#define FBGEN_PamAISensingManagerData_H

#include "AntRef.h"
#include "Array.h"
#include "LinearTransform.h"
#include "AISensingManagerData.h"

class PamAISensingManagerData :
	public AISensingManagerData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286ECB0;
	}
	AntRef m_CurrentMoveEnumAsset; // 0x30
	unsigned char _0x44[0x4];
	Array<PamSensingModifierBinding> m_SensingModifiers; // 0x48
	LinearTransform m_HeadTransformOverride; // 0x50
	float m_FovAngle; // 0x90
	float m_FovDistance; // 0x94
	float m_FovCloseAngle; // 0x98
	float m_FovCloseDistance; // 0x9c
	float m_MaxAboveDist; // 0xa0
	float m_SixSenseCylinderRadius; // 0xa4
	float m_SixSenseCylinderHeight; // 0xa8
	float m_NeverLoseSensedCharacterRadius; // 0xac
	bool m_IgnorePamOBBCollisionVolumes; // 0xb0
	bool m_CheckFovDistanceInXZOnly; // 0xb1
	bool m_AlwaysUseHeadTransform; // 0xb2
	bool m_AvoidSixSenseByCrouching; // 0xb3
	bool m_SensingEnabled; // 0xb4
	unsigned char _0xb5[0xb];
}; // size = 0xc0

#endif // FBGEN_PamAISensingManagerData_H
