//
// Generated with FrostbiteGen by Chod
// File: SDK\VectorMathOpEntityData.h
// Created: Wed Mar 10 18:59:24 2021
//

#ifndef FBGEN_VectorMathOpEntityData_H
#define FBGEN_VectorMathOpEntityData_H

#include "Realm.h"
#include "VectorMathOp.h"
#include "EntityData.h"

class VectorMathOpEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5F30;
	}
	Realm m_Realm; // 0x18
	VectorMathOp m_MathOperator; // 0x1c
}; // size = 0x20

#endif // FBGEN_VectorMathOpEntityData_H
