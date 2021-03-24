//
// Generated with FrostbiteGen by Chod
// File: SDK\PointLightEntityData.h
// Created: Wed Mar 10 19:03:04 2021
//

#ifndef FBGEN_PointLightEntityData_H
#define FBGEN_PointLightEntityData_H

#include "OriginalLocalLightEntityData.h"

class PointLightEntityData :
	public OriginalLocalLightEntityData // size = 0xc0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842130;
	}
	float m_Width; // 0xc0
	float m_TranslucencyAmbient; // 0xc4
	float m_TranslucencyScale; // 0xc8
	float m_TranslucencyPower; // 0xcc
	float m_TranslucencyDistortion; // 0xd0
	unsigned char _0xd4[0xc];
}; // size = 0xe0

#endif // FBGEN_PointLightEntityData_H
