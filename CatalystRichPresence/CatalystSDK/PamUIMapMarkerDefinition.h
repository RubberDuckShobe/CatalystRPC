//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMapMarkerDefinition.h
// Created: Wed Mar 10 19:03:28 2021
//

#ifndef FBGEN_PamUIMapMarkerDefinition_H
#define FBGEN_PamUIMapMarkerDefinition_H

#include "Vec3.h"
#include "PamUIMapMarkerType.h"
#include "DiceUIVectorShapeAsset.h"
#include "PamUIMapMarkerIconStyle.h"
#include "PamUIMapMarkerStickyIconStyle.h"
#include "DataContainer.h"

class PamUIMapMarkerDefinition :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142881010;
	}
	float m_Alpha; // 0x10
	float m_MaxZoomLevel; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_Color; // 0x20
	float m_MinZoomLevel; // 0x30
	unsigned char _0x34[0x4];
	const char* m_Name; // 0x38
	PamUIMapMarkerType m_MapmarkerType; // 0x40
	unsigned char _0x44[0x4];
	const char* m_Tags; // 0x48
	DiceUIVectorShapeAsset* m_IconShape; // 0x50
	DiceUIVectorShapeAsset* m_CityAlertIconShape; // 0x58
	DiceUIVectorShapeAsset* m_SelectedIconShape; // 0x60
	DiceUIVectorShapeAsset* m_StickyIconShape; // 0x68
	DiceUIVectorShapeAsset* m_RunnersVisionTargetIconShape; // 0x70
	DiceUIVectorShapeAsset* m_StickyInViewIconShape; // 0x78
	DiceUIVectorShapeAsset* m_StickyArrowShape; // 0x80
	PamUIMapMarkerIconStyle* m_IconStyle; // 0x88
	PamUIMapMarkerStickyIconStyle* m_StickyIconStyle; // 0x90
	PamUIMapMarkerStickyIconStyle* m_RunnersVisionTargetStickyIconStyle; // 0x98
	bool m_EnableDepthCulling; // 0xa0
	bool m_EnablePlaneProjection; // 0xa1
	bool m_Markable; // 0xa2
	bool m_CanBeRunnersVisionTarget; // 0xa3
	bool m_CityAlertMarkable; // 0xa4
	bool m_IgnoreCityAlert; // 0xa5
	unsigned char _0xa6[0xa];
}; // size = 0xb0

#endif // FBGEN_PamUIMapMarkerDefinition_H
