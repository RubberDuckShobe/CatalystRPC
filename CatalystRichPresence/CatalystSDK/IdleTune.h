//
// Generated with FrostbiteGen by Chod
// File: SDK\IdleTune.h
// Created: Wed Mar 10 19:06:32 2021
//

#ifndef FBGEN_IdleTune_H
#define FBGEN_IdleTune_H

#include "Asset.h"

class IdleTune :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829850;
	}
	float m_tetherDist; // 0x18
	float m_returnDelay; // 0x1c
}; // size = 0x20

#endif // FBGEN_IdleTune_H
