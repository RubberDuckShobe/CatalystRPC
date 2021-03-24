//
// Generated with FrostbiteGen by Chod
// File: SDK\PoseDefinition.h
// Created: Wed Mar 10 19:03:04 2021
//

#ifndef FBGEN_PoseDefinition_H
#define FBGEN_PoseDefinition_H

#include "AntRef.h"
#include "Array.h"
#include "DataContainer.h"

class PoseDefinition :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823BE0;
	}
	AntRef m_Animation; // 0x10
	float m_AnimationDuration; // 0x24
	Array<PoseTransitionBase*> m_Transitions; // 0x28
}; // size = 0x30

#endif // FBGEN_PoseDefinition_H
