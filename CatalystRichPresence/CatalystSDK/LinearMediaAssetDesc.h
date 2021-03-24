//
// Generated with FrostbiteGen by Chod
// File: SDK\LinearMediaAssetDesc.h
// Created: Wed Mar 10 19:06:16 2021
//

#ifndef FBGEN_LinearMediaAssetDesc_H
#define FBGEN_LinearMediaAssetDesc_H

#include "Array.h"
#include "Asset.h"

class LinearMediaAssetDesc :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428245E0;
	}
	Array<LinearMediaRuntimeResource> m_Resources; // 0x18
}; // size = 0x20

#endif // FBGEN_LinearMediaAssetDesc_H
