//
// Generated with FrostbiteGen by Chod
// File: SDK\PbrSpotLightEntityData.h
// Created: Wed Mar 10 19:03:14 2021
//

#ifndef FBGEN_PbrSpotLightEntityData_H
#define FBGEN_PbrSpotLightEntityData_H

#include "IesProfileAsset.h"
#include "PbrAnalyticLightEntityData.h"

class PbrSpotLightEntityData :
	public PbrAnalyticLightEntityData // size = 0xf0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142841EF0;
	}
	float m_DiscRadius; // 0xf0
	float m_InnerAngle; // 0xf4
	float m_OuterAngle; // 0xf8
	unsigned char _0xfc[0x4];
	IesProfileAsset* m_IESProfile; // 0x100
	float m_IESMultiplier; // 0x108
	bool m_UseIESProfileAsMask; // 0x10c
	unsigned char _0x10d[0x3];
}; // size = 0x110

#endif // FBGEN_PbrSpotLightEntityData_H
