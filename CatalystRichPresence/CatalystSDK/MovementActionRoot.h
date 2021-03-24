//
// Generated with FrostbiteGen by Chod
// File: SDK\MovementActionRoot.h
// Created: Wed Mar 10 19:05:44 2021
//

#ifndef FBGEN_MovementActionRoot_H
#define FBGEN_MovementActionRoot_H

#include "MovementActionData.h"
#include "Asset.h"

class MovementActionRoot :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820070;
	}
	MovementActionData* m_StartSequence; // 0x18
}; // size = 0x20

#endif // FBGEN_MovementActionRoot_H
