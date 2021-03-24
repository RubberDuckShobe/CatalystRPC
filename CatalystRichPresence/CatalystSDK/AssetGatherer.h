//
// Generated with FrostbiteGen by Chod
// File: SDK\AssetGatherer.h
// Created: Wed Mar 10 19:08:38 2021
//

#ifndef FBGEN_AssetGatherer_H
#define FBGEN_AssetGatherer_H

#include "Array.h"
#include "Asset.h"

class AssetGatherer :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BB120;
	}
	Array<Asset*> m_Assets; // 0x18
}; // size = 0x20

#endif // FBGEN_AssetGatherer_H
