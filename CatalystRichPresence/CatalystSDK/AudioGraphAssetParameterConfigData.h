//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioGraphAssetParameterConfigData.h
// Created: Wed Mar 10 19:08:37 2021
//

#ifndef FBGEN_AudioGraphAssetParameterConfigData_H
#define FBGEN_AudioGraphAssetParameterConfigData_H

#include "Asset.h"
#include "AudioGraphParameterConfigData.h"

class AudioGraphAssetParameterConfigData :
	public AudioGraphParameterConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1C10;
	}
	Asset* m_Asset; // 0x18
}; // size = 0x20

#endif // FBGEN_AudioGraphAssetParameterConfigData_H
