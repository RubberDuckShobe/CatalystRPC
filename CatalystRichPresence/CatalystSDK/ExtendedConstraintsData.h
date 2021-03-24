//
// Generated with FrostbiteGen by Chod
// File: SDK\ExtendedConstraintsData.h
// Created: Wed Mar 10 19:06:51 2021
//

#ifndef FBGEN_ExtendedConstraintsData_H
#define FBGEN_ExtendedConstraintsData_H

#include "DataContainer.h"

class ExtendedConstraintsData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C740;
	}
	float m_Heading; // 0x10
	float m_Width; // 0x14
	float m_Falloff; // 0x18
	float m_AngularConstraintMin; // 0x1c
	float m_AngularConstraintMax; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_ExtendedConstraintsData_H
