//
// Generated with FrostbiteGen by Chod
// File: SDK\ClothRendererSettings.h
// Created: Wed Mar 10 19:07:41 2021
//

#ifndef FBGEN_ClothRendererSettings_H
#define FBGEN_ClothRendererSettings_H

#include "QualityLevel.h"
#include "DataContainer.h"

class ClothRendererSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D6150;
	}
	QualityLevel m_ClothRendererQualityLevel; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_ClothRendererSettings_H
