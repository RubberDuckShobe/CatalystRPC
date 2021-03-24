//
// Generated with FrostbiteGen by Chod
// File: SDK\CutsceneImportSettings.h
// Created: Wed Mar 10 19:07:21 2021
//

#ifndef FBGEN_CutsceneImportSettings_H
#define FBGEN_CutsceneImportSettings_H

#include "Array.h"
#include "Asset.h"

class CutsceneImportSettings :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428240C0;
	}
	Array<DCCActorMappings> m_ActorRows; // 0x18
	Array<DCCQualityToCodecSettings> m_QualityRows; // 0x20
}; // size = 0x28

#endif // FBGEN_CutsceneImportSettings_H
