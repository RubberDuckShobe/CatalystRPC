//
// Generated with FrostbiteGen by Chod
// File: SDK\PbrSphereLightEntityData.h
// Created: Wed Mar 10 19:03:14 2021
//

#ifndef FBGEN_PbrSphereLightEntityData_H
#define FBGEN_PbrSphereLightEntityData_H

#include "IesProfileAsset.h"
#include "PbrAnalyticLightEntityData.h"

class PbrSphereLightEntityData :
	public PbrAnalyticLightEntityData // size = 0xf0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142841F50;
	}
	float m_SphereRadius; // 0xf0
	unsigned char _0xf4[0x4];
	IesProfileAsset* m_IESProfile; // 0xf8
	float m_IESMultiplier; // 0x100
	bool m_OnlyHempishere; // 0x104
	bool m_UseIESProfileAsMask; // 0x105
	unsigned char _0x106[0xa];
}; // size = 0x110

#endif // FBGEN_PbrSphereLightEntityData_H
