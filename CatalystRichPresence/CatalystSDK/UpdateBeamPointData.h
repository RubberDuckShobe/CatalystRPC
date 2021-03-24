//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateBeamPointData.h
// Created: Wed Mar 10 18:59:39 2021
//

#ifndef FBGEN_UpdateBeamPointData_H
#define FBGEN_UpdateBeamPointData_H

#include "Vec4.h"
#include "LocationSelection.h"
#include "ParamOverrideSelection.h"
#include "ProcessorData.h"

class UpdateBeamPointData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB060;
	}
	unsigned int m_NumPoints; // 0x30
	unsigned int m_NumCtrlPoints; // 0x34
	unsigned char _0x38[0x8];
	Vec4 m_TaperCoefficients; // 0x40
	Vec4 m_AttractorCoefficients; // 0x50
	Vec4 m_ParamCoefficients; // 0x60
	LocationSelection m_Attractor; // 0x70
	ParamOverrideSelection m_ParamOverride; // 0x74
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_UpdateBeamPointData_H
