//
// Generated with FrostbiteGen by Chod
// File: SDK\PbrTubeLightEntityData.h
// Created: Wed Mar 10 19:03:14 2021
//

#ifndef FBGEN_PbrTubeLightEntityData_H
#define FBGEN_PbrTubeLightEntityData_H

#include "PbrAnalyticLightEntityData.h"

class PbrTubeLightEntityData :
	public PbrAnalyticLightEntityData // size = 0xf0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142841E90;
	}
	float m_TubeRadius; // 0xf0
	float m_TubeWidth; // 0xf4
	bool m_OnlyHempishere; // 0xf8
	bool m_IsCapsule; // 0xf9
	unsigned char _0xfa[0x6];
}; // size = 0x100

#endif // FBGEN_PbrTubeLightEntityData_H
