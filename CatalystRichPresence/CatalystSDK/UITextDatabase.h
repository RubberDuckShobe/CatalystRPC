//
// Generated with FrostbiteGen by Chod
// File: SDK\UITextDatabase.h
// Created: Wed Mar 10 18:59:47 2021
//

#ifndef FBGEN_UITextDatabase_H
#define FBGEN_UITextDatabase_H

#include "LanguageFormat.h"
#include "Guid.h"
#include "Asset.h"

class UITextDatabase :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283F960;
	}
	LanguageFormat m_Language; // 0x18
	Guid m_BinaryChunk; // 0x1c
	unsigned int m_BinaryChunkSize; // 0x2c
	Guid m_HistogramChunk; // 0x30
	unsigned int m_HistogramChunkSize; // 0x40
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_UITextDatabase_H
