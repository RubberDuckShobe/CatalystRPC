//
// Generated with FrostbiteGen by Chod
// File: SDK\RailRideHeliData.h
// Created: Wed Mar 10 19:02:45 2021
//

#ifndef FBGEN_RailRideHeliData_H
#define FBGEN_RailRideHeliData_H

#include "PamVehicleSimulationData.h"

class RailRideHeliData :
	public PamVehicleSimulationData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CE40;
	}
	float m_CurvatureModifier; // 0x10
	float m_ConstraintModifier; // 0x14
	float m_BankingScaleModifier; // 0x18
	float m_TiltMax; // 0x1c
	float m_AngularCorrectionOnLargeHeadingOffset; // 0x20
	float m_AngularCorrectionOnSmallHeadingOffset; // 0x24
}; // size = 0x28

#endif // FBGEN_RailRideHeliData_H
