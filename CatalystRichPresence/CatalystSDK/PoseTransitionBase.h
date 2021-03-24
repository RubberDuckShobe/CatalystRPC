//
// Generated with FrostbiteGen by Chod
// File: SDK\PoseTransitionBase.h
// Created: Wed Mar 10 19:03:03 2021
//

#ifndef FBGEN_PoseTransitionBase_H
#define FBGEN_PoseTransitionBase_H

#include "PoseDefinition.h"
#include "DataContainer.h"

class PoseTransitionBase :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823B80;
	}
	PoseDefinition* m_TransitionTo; // 0x10
}; // size = 0x18

#endif // FBGEN_PoseTransitionBase_H
