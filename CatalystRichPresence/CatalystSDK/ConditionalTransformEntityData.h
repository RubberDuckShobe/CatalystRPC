//
// Generated with FrostbiteGen by Chod
// File: SDK\ConditionalTransformEntityData.h
// Created: Wed Mar 10 19:07:35 2021
//

#ifndef FBGEN_ConditionalTransformEntityData_H
#define FBGEN_ConditionalTransformEntityData_H

#include "LinearTransform.h"
#include "ConditionalStateEntityData.h"

class ConditionalTransformEntityData :
	public ConditionalStateEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899F20;
	}
	LinearTransform m_ValueIfTrue; // 0x20
	LinearTransform m_ValueIfFalse; // 0x60
}; // size = 0xa0

#endif // FBGEN_ConditionalTransformEntityData_H
