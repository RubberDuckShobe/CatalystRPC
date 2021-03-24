//
// Generated with FrostbiteGen by Chod
// File: SDK\OverlayColorsComponentData.h
// Created: Wed Mar 10 19:05:24 2021
//

#ifndef FBGEN_OverlayColorsComponentData_H
#define FBGEN_OverlayColorsComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "TextureAsset.h"
#include "VisualEnvironmentComponentData.h"

class OverlayColorsComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846520;
	}
	Vec3 m_ScannerCharacterColorTint; // 0x80
	Vec3 m_ScannerWeaponColorTint; // 0x90
	Vec3 m_ScannerObjectColorTint; // 0xa0
	Vec3 m_ScannerFriendlyColorTint; // 0xb0
	Realm m_Realm; // 0xc0
	unsigned char _0xc4[0x4];
	TextureAsset* m_OverlayCharacterTexture; // 0xc8
	TextureAsset* m_OverlayWeaponTexture; // 0xd0
	TextureAsset* m_OverlayObjectTexture; // 0xd8
	TextureAsset* m_OverlayFriendlyTexture; // 0xe0
	bool m_DrawCharacter; // 0xe8
	bool m_DrawCharacterOccluded; // 0xe9
	bool m_DrawWeapon; // 0xea
	bool m_DrawWeaponOccluded; // 0xeb
	bool m_DrawObject; // 0xec
	bool m_DrawObjectOccluded; // 0xed
	bool m_DrawFriendly; // 0xee
	bool m_DrawFriendlyOccluded; // 0xef
}; // size = 0xf0

#endif // FBGEN_OverlayColorsComponentData_H
