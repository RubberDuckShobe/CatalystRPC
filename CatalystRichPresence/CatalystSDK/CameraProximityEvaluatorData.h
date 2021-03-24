//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraProximityEvaluatorData.h
// Created: Wed Mar 10 19:08:19 2021
//

#ifndef FBGEN_CameraProximityEvaluatorData_H
#define FBGEN_CameraProximityEvaluatorData_H

#include "Vec3.h"
#include "EvaluatorData.h"

class CameraProximityEvaluatorData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC440;
	}
	float m_ForwardOffset; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Size; // 0x20
	Vec3 m_Offset; // 0x30
	Vec3 m_InnerRadiusDirection; // 0x40
	float m_InnerRadius; // 0x50
	unsigned char _0x54[0xc];
}; // size = 0x60

#endif // FBGEN_CameraProximityEvaluatorData_H
