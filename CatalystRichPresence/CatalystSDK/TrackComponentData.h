//
// Generated with FrostbiteGen by Chod
// File: SDK\TrackComponentData.h
// Created: Wed Mar 10 19:00:11 2021
//

#ifndef FBGEN_TrackComponentData_H
#define FBGEN_TrackComponentData_H

#include "MeshComponentData.h"

class TrackComponentData :
	public MeshComponentData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E450;
	}
	float m_ScrollFactor; // 0x90
	unsigned char _0x94[0xc];
}; // size = 0xa0

#endif // FBGEN_TrackComponentData_H
