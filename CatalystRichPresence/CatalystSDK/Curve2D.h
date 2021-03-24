//
// Generated with FrostbiteGen by Chod
// File: SDK\Curve2D.h
// Created: Wed Mar 10 19:07:23 2021
//

#ifndef FBGEN_Curve2D_H
#define FBGEN_Curve2D_H

#include "Array.h"
#include "DataContainer.h"

class Curve2D :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CD40;
	}
	Array<Vec2> m_Curve; // 0x10
}; // size = 0x18

#endif // FBGEN_Curve2D_H
