//
// Generated with FrostbiteGen by Chod
// File: SDK\ShadowExtrusionObjectInstance.h
// Created: Wed Mar 10 19:01:27 2021
//

#ifndef FBGEN_ShadowExtrusionObjectInstance_H
#define FBGEN_ShadowExtrusionObjectInstance_H

#include "Guid.h"
#include "Array.h"
struct ShadowExtrusionObjectInstance
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142892488;
	}
	Guid m_Guid; // 0x0
	Array<float> m_ExtrusionLengths; // 0x10
}; // size = 0x18

#endif // FBGEN_ShadowExtrusionObjectInstance_H
