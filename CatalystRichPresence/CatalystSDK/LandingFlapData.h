//
// Generated with FrostbiteGen by Chod
// File: SDK\LandingFlapData.h
// Created: Wed Mar 10 19:06:21 2021
//

#ifndef FBGEN_LandingFlapData_H
#define FBGEN_LandingFlapData_H

#include "DataContainer.h"

class LandingFlapData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CDA0;
	}
	float m_ActivationHeight; // 0x10
	float m_HeightTolerance; // 0x14
	float m_ActivationVelocity; // 0x18
	float m_VelocityTolerance; // 0x1c
}; // size = 0x20

#endif // FBGEN_LandingFlapData_H
