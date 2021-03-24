//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUILoadingScreenWidgetData.h
// Created: Wed Mar 10 19:03:28 2021
//

#ifndef FBGEN_PamUILoadingScreenWidgetData_H
#define FBGEN_PamUILoadingScreenWidgetData_H

#include "PamProgressionFlagGroup.h"
#include "PamProgressionFlag.h"
#include "PamProgressionData.h"
#include "Array.h"
#include "PamUIWidgetEntityData.h"

class PamUILoadingScreenWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288D840;
	}
	PamProgressionFlagGroup* m_FlagGroup; // 0x90
	PamProgressionFlag* m_Flag; // 0x98
	PamProgressionData* m_ProgressionData; // 0xa0
	Array<PamUILoadingScreenStringBucket> m_Buckets; // 0xa8
	Array<PamUILoadingScreenTextureMapEntry> m_Textures; // 0xb0
	Array<const char*> m_FallbackTextureIds; // 0xb8
	const char* m_BackPlateElementId; // 0xc0
	const char* m_BackgroundElementId; // 0xc8
	const char* m_HintElementId; // 0xd0
	float m_GlobalFadeInSpeed; // 0xd8
	float m_GlobalFadeOutSpeed; // 0xdc
	float m_ElementFadeInSpeed; // 0xe0
	float m_ElementFadeOutSpeed; // 0xe4
	float m_BackgroundFadeInSpeed; // 0xe8
	float m_BackgroundFadeOutSpeed; // 0xec
	float m_HintFadeInSpeed; // 0xf0
	float m_HintFadeOutSpeed; // 0xf4
	float m_HintDelay; // 0xf8
	float m_ElementFadeDelay; // 0xfc
}; // size = 0x100

#endif // FBGEN_PamUILoadingScreenWidgetData_H
