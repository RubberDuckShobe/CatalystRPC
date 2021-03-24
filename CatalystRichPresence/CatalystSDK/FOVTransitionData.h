//
// Generated with FrostbiteGen by Chod
// File: SDK\FOVTransitionData.h
// Created: Wed Mar 10 19:06:50 2021
//

#ifndef FBGEN_FOVTransitionData_H
#define FBGEN_FOVTransitionData_H

#include "FOVTransitionType.h"
#include "DataContainer.h"

class FOVTransitionData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817520;
	}
	FOVTransitionType m_TransitionType; // 0x10
	float m_Shape; // 0x14
	float m_StartDelay; // 0x18
	float m_StartJump; // 0x1c
	float m_EndEarly; // 0x20
	bool m_Invert; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_FOVTransitionData_H
