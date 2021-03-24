//
// Generated with FrostbiteGen by Chod
// File: SDK\PamGameTipAsset.h
// Created: Wed Mar 10 19:04:37 2021
//

#ifndef FBGEN_PamGameTipAsset_H
#define FBGEN_PamGameTipAsset_H

#include "Array.h"
#include "Asset.h"

class PamGameTipAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C480;
	}
	Array<PamGameTipData> m_Tips; // 0x18
}; // size = 0x20

#endif // FBGEN_PamGameTipAsset_H
