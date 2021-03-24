//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMoveSequence.h
// Created: Wed Mar 10 19:04:22 2021
//

#ifndef FBGEN_PamMoveSequence_H
#define FBGEN_PamMoveSequence_H

#include "Array.h"
struct PamMoveSequence
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C378;
	}
	const char* m_Name; // 0x0
	Array<PamMoveSequencePart> m_Moves; // 0x8
	Array<PamMoveSequencePart> m_TransitionMoves; // 0x10
	Array<PamMoveSequencePart> m_FailMoves; // 0x18
	bool m_FailOnDeath; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_PamMoveSequence_H
