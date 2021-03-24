//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateRibbonFadeData.h
// Created: Wed Mar 10 18:59:36 2021
//

#ifndef FBGEN_UpdateRibbonFadeData_H
#define FBGEN_UpdateRibbonFadeData_H

#include "ProcessorData.h"

class UpdateRibbonFadeData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB600;
	}
	int m_FadeInParticleCount; // 0x30
	int m_FadeOutParticleCount; // 0x34
}; // size = 0x38

#endif // FBGEN_UpdateRibbonFadeData_H
