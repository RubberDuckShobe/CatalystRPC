//
// Generated with FrostbiteGen by Chod
// File: SDK\MultipleTransformEntry.h
// Created: Wed Mar 10 19:05:42 2021
//

#ifndef FBGEN_MultipleTransformEntry_H
#define FBGEN_MultipleTransformEntry_H

#include "AudioGraphNodePort.h"
#include "SimpleTransformOperation.h"
#include "AngleUnit.h"
#include "AudioGraphNodePortGroup.h"

class MultipleTransformEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2510;
	}
	AudioGraphNodePort m_Y; // 0x10
	AudioGraphNodePort m_Z; // 0x18
	SimpleTransformOperation m_Operation; // 0x20
	AngleUnit m_AngleUnit; // 0x24
}; // size = 0x28

#endif // FBGEN_MultipleTransformEntry_H
