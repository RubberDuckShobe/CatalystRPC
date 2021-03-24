//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverLabelSource.h
// Created: Wed Mar 10 18:59:00 2021
//

#ifndef FBGEN_VoiceOverLabelSource_H
#define FBGEN_VoiceOverLabelSource_H

#include "VoiceOverValueConnection.h"
#include "DataContainer.h"

class VoiceOverLabelSource :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D44F0;
	}
	VoiceOverValueConnection m_Source; // 0x10
}; // size = 0x20

#endif // FBGEN_VoiceOverLabelSource_H
