//
// Generated with FrostbiteGen by Chod
// File: SDK\VisualUnlockAsset.h
// Created: Wed Mar 10 18:59:11 2021
//

#ifndef FBGEN_VisualUnlockAsset_H
#define FBGEN_VisualUnlockAsset_H

#include "ObjectBlueprint.h"
#include "BlueprintBundleReference.h"
#include "AntRef.h"
#include "VisualUnlockAntData.h"
#include "Array.h"
#include "UnlockAsset.h"

class VisualUnlockAsset :
	public UnlockAsset // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E990;
	}
	ObjectBlueprint* m_OutObjectBlueprint; // 0x48
	BlueprintBundleReference m_BlueprintBundleReference; // 0x50
	BlueprintBundleReference m_FirstPersonBundle; // 0x88
	AntRef m_FacePoserLibrary; // 0xc0
	AntRef m_MorphDofSet; // 0xd4
	VisualUnlockAntData* m_VisualUnlockAntData; // 0xe8
	Array<VisualUnlockAsset*> m_VisualUnlockAssets; // 0xf0
	bool m_RenderIn1p; // 0xf8
	bool m_OnDemandLoaded; // 0xf9
	unsigned char _0xfa[0x6];
}; // size = 0x100

#endif // FBGEN_VisualUnlockAsset_H
