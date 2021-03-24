//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateTurretDisruptorResponseData.h
// Created: Wed Mar 10 19:05:10 2021
//

#ifndef FBGEN_PamAIStateTurretDisruptorResponseData_H
#define FBGEN_PamAIStateTurretDisruptorResponseData_H

#include "LinearTransform.h"
#include "PamAIStateBaseData.h"

class PamAIStateTurretDisruptorResponseData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286C970;
	}
	float m_FiringSpreeDuration; // 0x28
	float m_OverheatDuration; // 0x2c
	bool m_HasDisruptorDestroyUnlock; // 0x30
	unsigned char _0x31[0xf];
	LinearTransform m_GunTransform; // 0x40
}; // size = 0x80

#endif // FBGEN_PamAIStateTurretDisruptorResponseData_H
