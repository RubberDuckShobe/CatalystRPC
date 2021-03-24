//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStartPointTransformationsComponent.h
// Created: Wed Mar 10 19:03:47 2021
//

#ifndef FBGEN_PamStartPointTransformationsComponent_H
#define FBGEN_PamStartPointTransformationsComponent_H

#include "Array.h"
#include "LevelDescriptionComponent.h"

class PamStartPointTransformationsComponent :
	public LevelDescriptionComponent // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428818B0;
	}
	Array<StartPointTransformationData> m_StartPointTransformations; // 0x10
}; // size = 0x18

#endif // FBGEN_PamStartPointTransformationsComponent_H
