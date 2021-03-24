//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphShapes.h
// Created: Wed Mar 10 19:05:47 2021
//

#ifndef FBGEN_MorphShapes_H
#define FBGEN_MorphShapes_H

#include "Array.h"
#include "Asset.h"

class MorphShapes :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825C70;
	}
	Array<MorphShape*> m_Shapes; // 0x18
}; // size = 0x20

#endif // FBGEN_MorphShapes_H
