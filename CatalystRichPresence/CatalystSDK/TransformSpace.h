//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformSpace.h
// Created: Wed Mar 10 19:00:06 2021
//

#ifndef FBGEN_TransformSpace_H
#define FBGEN_TransformSpace_H

#include "TransformSpace.h"
#include "LinearTransform.h"
#include "DataContainer.h"

class TransformSpace :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5210;
	}
	TransformSpace* m_Parent; // 0x10
	unsigned int m_Id; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_LocalTransform; // 0x20
}; // size = 0x60

#endif // FBGEN_TransformSpace_H
