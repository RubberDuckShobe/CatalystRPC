//
// Generated with FrostbiteGen by Chod
// File: SDK\AutoPlaySequence.h
// Created: Wed Mar 10 19:08:34 2021
//

#ifndef FBGEN_AutoPlaySequence_H
#define FBGEN_AutoPlaySequence_H

#include "LinearTransform.h"
#include "Guid.h"
#include "RecordedInputData.h"
struct AutoPlaySequence
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF530;
	}
	LinearTransform m_Source; // 0x0
	LinearTransform m_Target; // 0x40
	Guid m_SequenceGuid; // 0x80
	const char* m_Level; // 0x90
	RecordedInputData* m_Data; // 0x98
	float m_Length; // 0xa0
	float m_SourceYaw; // 0xa4
	float m_SourcePitch; // 0xa8
	bool m_IsYawPitchValid; // 0xac
	unsigned char _0xad[0x3];
}; // size = 0xb0

#endif // FBGEN_AutoPlaySequence_H
