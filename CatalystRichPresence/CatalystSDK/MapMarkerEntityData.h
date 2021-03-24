//
// Generated with FrostbiteGen by Chod
// File: SDK\MapMarkerEntityData.h
// Created: Wed Mar 10 19:06:04 2021
//

#ifndef FBGEN_MapMarkerEntityData_H
#define FBGEN_MapMarkerEntityData_H

#include "Vec3.h"
#include "LinearTransform.h"
#include "MapMarkerType.h"
#include "TeamId.h"
#include "UIHudIcon.h"
#include "UIWorldIconBehavior.h"
#include "SpatialEntityData.h"

class MapMarkerEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B330;
	}
	Vec3 m_BaseTransform; // 0x60
	LinearTransform m_VisualTransform; // 0x70
	const char* m_Sid; // 0xb0
	const char* m_NameLetter; // 0xb8
	int m_NrOfPassengers; // 0xc0
	int m_NrOfEntries; // 0xc4
	float m_ShowRadius; // 0xc8
	float m_HideRadius; // 0xcc
	float m_BlinkTime; // 0xd0
	MapMarkerType m_MarkerType; // 0xd4
	TeamId m_VisibleForTeam; // 0xd8
	TeamId m_OwnerTeam; // 0xdc
	UIHudIcon m_HudIcon; // 0xe0
	unsigned char _0xe4[0x4];
	const char* m_IconName; // 0xe8
	UIWorldIconBehavior* m_IconBehavior; // 0xf0
	float m_VerticalOffset; // 0xf8
	float m_FocusPointRadius; // 0xfc
	int m_FocusPriority; // 0x100
	float m_ProgressTime; // 0x104
	float m_Progress; // 0x108
	unsigned int m_TrackedPlayersInRange; // 0x10c
	float m_TrackingPlayerRange; // 0x110
	float m_InstantFlagReturnRadius; // 0x114
	float m_ProgressPlayerSpeedUpPercentage; // 0x118
	float m_ProgressTime1Player; // 0x11c
	float m_ProgressMinTime; // 0x120
	bool m_IsVisible; // 0x124
	bool m_ShowAirTargetBox; // 0x125
	bool m_IsFocusPoint; // 0x126
	bool m_Snap; // 0x127
	bool m_OnlyShowSnapped; // 0x128
	bool m_UseMarkerTransform; // 0x129
	bool m_ServerControlledPosition; // 0x12a
	bool m_PositionStatic; // 0x12b
	bool m_Enabled; // 0x12c
	bool m_ShowDistanceInText; // 0x12d
	bool m_ShowProgress; // 0x12e
	unsigned char _0x12f[0x1];
}; // size = 0x130

#endif // FBGEN_MapMarkerEntityData_H
