//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateSizeData.h
// Created: Wed Mar 10 18:59:35 2021
//

#ifndef FBGEN_UpdateSizeData_H
#define FBGEN_UpdateSizeData_H

#include "Vec2.h"
#include "ProcessorData.h"

class UpdateSizeData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB960;
	}
	Vec2 m_Pivot; // 0x30
}; // size = 0x38

#endif // FBGEN_UpdateSizeData_H
