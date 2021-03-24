//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMoveSeqRewardCondition.h
// Created: Wed Mar 10 19:04:22 2021
//

#ifndef FBGEN_PamMoveSeqRewardCondition_H
#define FBGEN_PamMoveSeqRewardCondition_H

#include "Array.h"
#include "PamRewardCondition.h"

class PamMoveSeqRewardCondition :
	public PamRewardCondition // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878EA0;
	}
	Array<PamMoveSeq> m_RequiredMoves; // 0x10
}; // size = 0x18

#endif // FBGEN_PamMoveSeqRewardCondition_H
