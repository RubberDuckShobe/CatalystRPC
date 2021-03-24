//
// Generated with FrostbiteGen by Chod
// File: SDK\GroupTransformLayerData.h
// Created: Wed Mar 10 19:06:36 2021
//

#ifndef FBGEN_GroupTransformLayerData_H
#define FBGEN_GroupTransformLayerData_H

#include "Array.h"
#include "TransformLayerData.h"

class GroupTransformLayerData :
	public TransformLayerData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283BDB0;
	}
	Array<TransformLayerData*> m_Children; // 0x38
}; // size = 0x40

#endif // FBGEN_GroupTransformLayerData_H
