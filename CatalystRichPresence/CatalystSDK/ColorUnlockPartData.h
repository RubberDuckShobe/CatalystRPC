//
// Generated with FrostbiteGen by Chod
// File: SDK\ColorUnlockPartData.h
// Created: Wed Mar 10 19:07:39 2021
//

#ifndef FBGEN_ColorUnlockPartData_H
#define FBGEN_ColorUnlockPartData_H

#include "ColorReference.h"
#include "DataContainer.h"

class ColorUnlockPartData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811CA0;
	}
	ColorReference* m_ColorReference; // 0x10
}; // size = 0x18

#endif // FBGEN_ColorUnlockPartData_H
