//
// Generated with FrostbiteGen by Chod
// File: SDK\LevelReportingAsset.h
// Created: Wed Mar 10 19:06:18 2021
//

#ifndef FBGEN_LevelReportingAsset_H
#define FBGEN_LevelReportingAsset_H

#include "Array.h"
#include "Asset.h"

class LevelReportingAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280C050;
	}
	Array<Guid> m_BuiltLevels; // 0x18
}; // size = 0x20

#endif // FBGEN_LevelReportingAsset_H
