//
// Generated with FrostbiteGen by Chod
// File: SDK\ClothSystemSettings.h
// Created: Wed Mar 10 19:07:40 2021
//

#ifndef FBGEN_ClothSystemSettings_H
#define FBGEN_ClothSystemSettings_H

#include "QualityLevel.h"
#include "DataContainer.h"

class ClothSystemSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D60F0;
	}
	QualityLevel m_ClothSystemQualityLevel; // 0x10
	float m_DefaultActivationRadius; // 0x14
}; // size = 0x18

#endif // FBGEN_ClothSystemSettings_H
