//
// Generated with FrostbiteGen by Chod
// File: SDK\DiceUIVectorShapeAsset.h
// Created: Wed Mar 10 19:07:10 2021
//

#ifndef FBGEN_DiceUIVectorShapeAsset_H
#define FBGEN_DiceUIVectorShapeAsset_H

#include "Array.h"
#include "Vec4.h"
#include "DataContainerPolicyAsset.h"

class DiceUIVectorShapeAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF5B0;
	}
	Array<DiceUIVectorShape> m_Shapes; // 0x18
	Vec4 m_LayoutRect; // 0x20
}; // size = 0x30

#endif // FBGEN_DiceUIVectorShapeAsset_H
