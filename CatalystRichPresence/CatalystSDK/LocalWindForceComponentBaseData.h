//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalWindForceComponentBaseData.h
// Created: Wed Mar 10 19:06:10 2021
//

#ifndef FBGEN_LocalWindForceComponentBaseData_H
#define FBGEN_LocalWindForceComponentBaseData_H

#include "ForceGroupAsset.h"
#include "GameComponentData.h"

class LocalWindForceComponentBaseData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EAD40;
	}
	float m_Strength; // 0x70
	float m_Variation; // 0x74
	float m_VariationRate; // 0x78
	float m_MicroVariation; // 0x7c
	float m_Hardness; // 0x80
	float m_ForceAsInstantVelocity; // 0x84
	ForceGroupAsset* m_ForceGroup; // 0x88
}; // size = 0x90

#endif // FBGEN_LocalWindForceComponentBaseData_H
