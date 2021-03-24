//
// Generated with FrostbiteGen by Chod
// File: SDK\VisualEnvironmentEntityData.h
// Created: Wed Mar 10 18:59:13 2021
//

#ifndef FBGEN_VisualEnvironmentEntityData_H
#define FBGEN_VisualEnvironmentEntityData_H

#include "VisualEnvironmentBlendMode.h"
#include "GameComponentEntityData.h"

class VisualEnvironmentEntityData :
	public GameComponentEntityData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821F00;
	}
	float m_Visibility; // 0x80
	float m_FutureVisibility; // 0x84
	int m_Priority; // 0x88
	VisualEnvironmentBlendMode m_BlendMode; // 0x8c
	bool m_ExplicitPriorityEnable; // 0x90
	unsigned char _0x91[0xf];
}; // size = 0xa0

#endif // FBGEN_VisualEnvironmentEntityData_H
