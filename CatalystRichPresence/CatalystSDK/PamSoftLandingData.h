//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSoftLandingData.h
// Created: Wed Mar 10 19:03:48 2021
//

#ifndef FBGEN_PamSoftLandingData_H
#define FBGEN_PamSoftLandingData_H

#include "PamFindableMovementVolumeData.h"

class PamSoftLandingData :
	public PamFindableMovementVolumeData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884C20;
	}
	float m_Radius; // 0x80
	float m_Guidance; // 0x84
	unsigned char _0x88[0x8];
}; // size = 0x90

#endif // FBGEN_PamSoftLandingData_H
