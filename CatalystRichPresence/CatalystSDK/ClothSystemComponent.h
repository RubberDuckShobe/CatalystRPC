//
// Generated with FrostbiteGen by Chod
// File: SDK\ClothSystemComponent.h
// Created: Wed Mar 10 19:07:40 2021
//

#ifndef FBGEN_ClothSystemComponent_H
#define FBGEN_ClothSystemComponent_H

#include "QualityScalableFloat.h"
#include "SubWorldDataComponent.h"

class ClothSystemComponent :
	public SubWorldDataComponent // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D6090;
	}
	QualityScalableFloat m_ActivationRadius; // 0x10
}; // size = 0x20

#endif // FBGEN_ClothSystemComponent_H
