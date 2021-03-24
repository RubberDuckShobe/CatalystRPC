//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateColorData.h
// Created: Wed Mar 10 18:59:38 2021
//

#ifndef FBGEN_UpdateColorData_H
#define FBGEN_UpdateColorData_H

#include "Vec3.h"
#include "ProcessorData.h"

class UpdateColorData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB780;
	}
	Vec3 m_Color; // 0x30
}; // size = 0x40

#endif // FBGEN_UpdateColorData_H
