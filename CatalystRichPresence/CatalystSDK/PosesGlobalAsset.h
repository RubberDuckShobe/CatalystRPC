//
// Generated with FrostbiteGen by Chod
// File: SDK\PosesGlobalAsset.h
// Created: Wed Mar 10 19:03:03 2021
//

#ifndef FBGEN_PosesGlobalAsset_H
#define FBGEN_PosesGlobalAsset_H

#include "Array.h"
#include "PoseDefinition.h"
#include "Asset.h"

class PosesGlobalAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823CA0;
	}
	Array<PoseDefinition*> m_Poses; // 0x18
	PoseDefinition* m_DefaultPose; // 0x20
}; // size = 0x28

#endif // FBGEN_PosesGlobalAsset_H
