//
// Generated with FrostbiteGen by Chod
// File: SDK\CurveData.h
// Created: Wed Mar 10 19:07:23 2021
//

#ifndef FBGEN_CurveData_H
#define FBGEN_CurveData_H

#include "InfinityType.h"
#include "CurveType.h"
#include "Array.h"
#include "DataContainer.h"

class CurveData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283E350;
	}
	InfinityType m_PreInfinity; // 0x10
	InfinityType m_PostInfinity; // 0x14
	CurveType m_CurveType; // 0x18
	unsigned char _0x1c[0x4];
	Array<float> m_Time; // 0x20
	Array<float> m_Value; // 0x28
	Array<float> m_InTanX; // 0x30
	Array<float> m_InTanY; // 0x38
	Array<float> m_OutTanX; // 0x40
	Array<float> m_OutTanY; // 0x48
	bool m_IsWeighted; // 0x50
	unsigned char _0x51[0x7];
}; // size = 0x58

#endif // FBGEN_CurveData_H
