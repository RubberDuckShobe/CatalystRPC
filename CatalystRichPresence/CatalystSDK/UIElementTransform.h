//
// Generated with FrostbiteGen by Chod
// File: SDK\UIElementTransform.h
// Created: Wed Mar 10 18:59:56 2021
//

#ifndef FBGEN_UIElementTransform_H
#define FBGEN_UIElementTransform_H

#include "Vec3.h"
struct UIElementTransform
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281D928;
	}
	Vec3 m_Rotation; // 0x0
	Vec3 m_RotationPivot; // 0x10
	float m_Z; // 0x20
	unsigned char _0x24[0xc];
}; // size = 0x30

#endif // FBGEN_UIElementTransform_H
