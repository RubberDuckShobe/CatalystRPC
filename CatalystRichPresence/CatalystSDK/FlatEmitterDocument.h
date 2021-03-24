//
// Generated with FrostbiteGen by Chod
// File: SDK\FlatEmitterDocument.h
// Created: Wed Mar 10 19:06:46 2021
//

#ifndef FBGEN_FlatEmitterDocument_H
#define FBGEN_FlatEmitterDocument_H

#include "EmitterTemplateData.h"
#include "EmitterDocument.h"

class FlatEmitterDocument :
	public EmitterDocument // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DA940;
	}
	EmitterTemplateData* m_TemplateData; // 0x18
}; // size = 0x20

#endif // FBGEN_FlatEmitterDocument_H
