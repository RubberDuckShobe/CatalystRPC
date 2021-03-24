//
// Generated with FrostbiteGen by Chod
// File: SDK\StartPointTransformationData.h
// Created: Wed Mar 10 19:00:58 2021
//

#ifndef FBGEN_StartPointTransformationData_H
#define FBGEN_StartPointTransformationData_H

#include "LinearTransform.h"
struct StartPointTransformationData
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428803F0;
	}
	LinearTransform m_Transformation; // 0x0
	const char* m_StartPointName; // 0x40
	unsigned char _0x48[0x8];
}; // size = 0x50

#endif // FBGEN_StartPointTransformationData_H
