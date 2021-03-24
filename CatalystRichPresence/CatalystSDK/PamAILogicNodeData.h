//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAILogicNodeData.h
// Created: Wed Mar 10 19:05:18 2021
//

#ifndef FBGEN_PamAILogicNodeData_H
#define FBGEN_PamAILogicNodeData_H

#include "PamNodeGameLogic.h"
#include "NodeGameLogic.h"
#include "AILogicSelectorNodeData.h"

class PamAILogicNodeData :
	public AILogicSelectorNodeData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E2F0;
	}
	PamNodeGameLogic m_PamLogic; // 0x30
	NodeGameLogic m_Logic; // 0x34
}; // size = 0x38

#endif // FBGEN_PamAILogicNodeData_H
