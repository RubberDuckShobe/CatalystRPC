//
// Generated with FrostbiteGen by Chod
// File: SDK\DCCActorMappings.h
// Created: Wed Mar 10 19:07:21 2021
//

#ifndef FBGEN_DCCActorMappings_H
#define FBGEN_DCCActorMappings_H

#include "AntRef.h"
#include "Array.h"
struct DCCActorMappings
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428237A0;
	}
	AntRef m_Actor; // 0x0
	AntRef m_DofSetList; // 0x14
	AntRef m_CodecOverride; // 0x28
	AntRef m_ClipImportResponseScript; // 0x3c
	const char* m_ConnectBoneName; // 0x50
	Array<const char*> m_DCCNames; // 0x58
	Array<ObjectBlueprint*> m_ActorBlueprints; // 0x60
	const char* m_PreferredFbProxyControllerEntityLinkName; // 0x68
}; // size = 0x70

#endif // FBGEN_DCCActorMappings_H
