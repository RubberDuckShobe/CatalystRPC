//
// Generated with FrostbiteGen by Chod
// File: SDK\EffectParameterList.h
// Created: Wed Mar 10 19:07:03 2021
//

#ifndef FBGEN_EffectParameterList_H
#define FBGEN_EffectParameterList_H

#include "Array.h"
#include "Asset.h"

class EffectParameterList :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E8090;
	}
	Array<EffectParameter*> m_Parameters; // 0x18
}; // size = 0x20

#endif // FBGEN_EffectParameterList_H
