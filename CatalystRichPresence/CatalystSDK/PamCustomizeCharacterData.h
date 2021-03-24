//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCustomizeCharacterData.h
// Created: Wed Mar 10 19:04:43 2021
//

#ifndef FBGEN_PamCustomizeCharacterData_H
#define FBGEN_PamCustomizeCharacterData_H

#include "Array.h"
#include "CustomizeCharacterData.h"

class PamCustomizeCharacterData :
	public CustomizeCharacterData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B5F0;
	}
	Array<PamBreakableAttachmentData> m_BreakableAttachments; // 0x38
	Array<PamLensFlareAttachmentData> m_LensFlareAttachments; // 0x40
	Array<PamLightAttachmentData> m_LightAttachments; // 0x48
	Array<PamRefelctionAttachmentData> m_ReflectionAttachments; // 0x50
	Array<PamBreakableVisualUnlock> m_BreakableVisualUnlocks; // 0x58
	Array<ImpactMaterialEntryOverride> m_ImpactZoneMappings; // 0x60
	Array<WriteAntGameStateData*> m_AntGameStates; // 0x68
}; // size = 0x70

#endif // FBGEN_PamCustomizeCharacterData_H
