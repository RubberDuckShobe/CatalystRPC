//
// Generated with FrostbiteGen by Chod
// File: SDK\ImportReplayAssetParams.h
// Created: Wed Mar 10 19:06:31 2021
//

#ifndef FBGEN_ImportReplayAssetParams_H
#define FBGEN_ImportReplayAssetParams_H

#include "DataContainer.h"

class ImportReplayAssetParams :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C5A0;
	}
	const char* m_AssetName; // 0x10
	const char* m_SourceFile; // 0x18
}; // size = 0x20

#endif // FBGEN_ImportReplayAssetParams_H
