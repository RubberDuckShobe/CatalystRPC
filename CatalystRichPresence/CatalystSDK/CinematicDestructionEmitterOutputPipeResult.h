//
// Generated with FrostbiteGen by Chod
// File: SDK\CinematicDestructionEmitterOutputPipeResult.h
// Created: Wed Mar 10 19:08:12 2021
//

#ifndef FBGEN_CinematicDestructionEmitterOutputPipeResult_H
#define FBGEN_CinematicDestructionEmitterOutputPipeResult_H

#include "Array.h"
#include "CinematicDestructionOutputPipeResult.h"

class CinematicDestructionEmitterOutputPipeResult :
	public CinematicDestructionOutputPipeResult // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142848970;
	}
	Array<CinematicDestructionEmitterOutputPipeAttribute> m_Attributes; // 0x10
}; // size = 0x18

#endif // FBGEN_CinematicDestructionEmitterOutputPipeResult_H
