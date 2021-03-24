//
// Generated with FrostbiteGen by Chod
// File: SDK\BlueprintBundle.h
// Created: Wed Mar 10 19:08:29 2021
//

#ifndef FBGEN_BlueprintBundle_H
#define FBGEN_BlueprintBundle_H

#include "Blueprint.h"
#include "SharedBundleBaseAsset.h"

class BlueprintBundle :
	public SharedBundleBaseAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817B80;
	}
	Blueprint* m_Blueprint; // 0x18
}; // size = 0x20

#endif // FBGEN_BlueprintBundle_H
