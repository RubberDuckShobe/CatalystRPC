//
// Generated with FrostbiteGen by Chod
// File: SDK\AntProjectAsset.h
// Created: Wed Mar 10 19:08:43 2021
//

#ifndef FBGEN_AntProjectAsset_H
#define FBGEN_AntProjectAsset_H

#include "AntRef.h"
#include "Asset.h"

class AntProjectAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C2E90;
	}
	const char* m_AntNativeProjectName; // 0x18
	AntRef m_SceneOp; // 0x20
	int m_ProjectId; // 0x34
}; // size = 0x38

#endif // FBGEN_AntProjectAsset_H
