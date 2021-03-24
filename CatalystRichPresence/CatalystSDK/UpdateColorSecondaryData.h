//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateColorSecondaryData.h
// Created: Wed Mar 10 18:59:38 2021
//

#ifndef FBGEN_UpdateColorSecondaryData_H
#define FBGEN_UpdateColorSecondaryData_H

#include "Vec3.h"
#include "ProcessorData.h"

class UpdateColorSecondaryData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB720;
	}
	Vec3 m_Color; // 0x30
}; // size = 0x40

#endif // FBGEN_UpdateColorSecondaryData_H
