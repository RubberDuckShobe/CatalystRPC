//
// Generated with FrostbiteGen by Chod
// File: SDK\ScalableEmitterDocument.h
// Created: Wed Mar 10 19:02:31 2021
//

#ifndef FBGEN_ScalableEmitterDocument_H
#define FBGEN_ScalableEmitterDocument_H

#include "EmitterTemplateData.h"
#include "EmitterDocument.h"

class ScalableEmitterDocument :
	public EmitterDocument // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DA9A0;
	}
	EmitterTemplateData* m_TemplateDataLow; // 0x18
	EmitterTemplateData* m_TemplateDataMedium; // 0x20
	EmitterTemplateData* m_TemplateDataHigh; // 0x28
	EmitterTemplateData* m_TemplateDataUltra; // 0x30
}; // size = 0x38

#endif // FBGEN_ScalableEmitterDocument_H
