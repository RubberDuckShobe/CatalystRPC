//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformPartPropertyTrackData.h
// Created: Wed Mar 10 19:00:07 2021
//

#ifndef FBGEN_TransformPartPropertyTrackData_H
#define FBGEN_TransformPartPropertyTrackData_H

#include "ResourceRef.h"
#include "TransformPart.h"
#include "CurveInfinityType.h"
#include "Array.h"
#include "PropertyTrackData.h"

class TransformPartPropertyTrackData :
	public PropertyTrackData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA2C0;
	}
	ResourceRef m_Resource; // 0x20
	TransformPart m_TransformPart; // 0x28
	CurveInfinityType m_PreInfinity; // 0x2c
	CurveInfinityType m_PostInfinity; // 0x30
	unsigned char _0x34[0x4];
	Array<TransformPartPropertyKey> m_Values; // 0x38
	float m_EvaluatorFps; // 0x40
	unsigned int m_KeyStartIndex; // 0x44
	unsigned int m_KeyCount; // 0x48
	bool m_Weighted; // 0x4c
	bool m_IsStatic; // 0x4d
	unsigned char _0x4e[0x2];
}; // size = 0x50

#endif // FBGEN_TransformPartPropertyTrackData_H
