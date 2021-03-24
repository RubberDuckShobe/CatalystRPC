//
// Generated with FrostbiteGen by Chod
// File: SDK\LogicalExpressionEntry.h
// Created: Wed Mar 10 19:06:06 2021
//

#ifndef FBGEN_LogicalExpressionEntry_H
#define FBGEN_LogicalExpressionEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class LogicalExpressionEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2BD0;
	}
	AudioGraphNodePort m_Trigger; // 0x10
}; // size = 0x18

#endif // FBGEN_LogicalExpressionEntry_H
