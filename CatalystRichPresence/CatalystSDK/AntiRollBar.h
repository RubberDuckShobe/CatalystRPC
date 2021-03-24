//
// Generated with FrostbiteGen by Chod
// File: SDK\AntiRollBar.h
// Created: Wed Mar 10 19:08:42 2021
//

#ifndef FBGEN_AntiRollBar_H
#define FBGEN_AntiRollBar_H

#include "DataContainer.h"

class AntiRollBar :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CF80;
	}
	float m_Stiffness; // 0x10
	float m_TorqueActivationLimit; // 0x14
}; // size = 0x18

#endif // FBGEN_AntiRollBar_H
