//
// Generated with FrostbiteGen by Chod
// File: SDK\WindComponentData.h
// Created: Wed Mar 10 18:58:45 2021
//

#ifndef FBGEN_WindComponentData_H
#define FBGEN_WindComponentData_H

#include "Realm.h"
#include "VisualEnvironmentComponentData.h"

class WindComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846D00;
	}
	Realm m_Realm; // 0x80
	float m_WindDirection; // 0x84
	float m_WindStrength; // 0x88
	float m_WindVariationMultiplier; // 0x8c
	float m_WindVariationRateMultiplier; // 0x90
	float m_WindMicroVariationMultiplier; // 0x94
	float m_TurbulenceMultiplier; // 0x98
	float m_TurbulenceScale; // 0x9c
}; // size = 0xa0

#endif // FBGEN_WindComponentData_H
