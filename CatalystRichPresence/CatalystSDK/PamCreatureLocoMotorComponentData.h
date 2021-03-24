//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCreatureLocoMotorComponentData.h
// Created: Wed Mar 10 19:04:44 2021
//

#ifndef FBGEN_PamCreatureLocoMotorComponentData_H
#define FBGEN_PamCreatureLocoMotorComponentData_H

#include "PamLocoBindings.h"
#include "PamCreatureLocoBinding.h"
#include "CreatureLocoMotorComponentData.h"

class PamCreatureLocoMotorComponentData :
	public CreatureLocoMotorComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CCC0;
	}
	PamLocoBindings* m_AdditionalAntBindings; // 0x80
	PamCreatureLocoBinding m_PamCLAntBindings; // 0x88
	unsigned char _0x9c[0x4];
}; // size = 0xa0

#endif // FBGEN_PamCreatureLocoMotorComponentData_H
