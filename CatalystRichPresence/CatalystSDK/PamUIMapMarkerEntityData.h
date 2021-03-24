//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMapMarkerEntityData.h
// Created: Wed Mar 10 19:03:27 2021
//

#ifndef FBGEN_PamUIMapMarkerEntityData_H
#define FBGEN_PamUIMapMarkerEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "Vec3.h"
#include "PamUIMapMarkerDefinition.h"
#include "EntityData.h"

class PamUIMapMarkerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880F50;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_Transform; // 0x20
	Vec3 m_StickyIconOffset; // 0x60
	const char* m_Text; // 0x70
	float m_Progression; // 0x78
	float m_DynamicAlpha; // 0x7c
	float m_DynamicScale; // 0x80
	float m_StickyIconAlpha; // 0x84
	PamUIMapMarkerDefinition* m_MapMarkerDefinition; // 0x88
	const char* m_Tags; // 0x90
	bool m_Visible; // 0x98
	bool m_VisibleInHud; // 0x99
	unsigned char _0x9a[0x6];
}; // size = 0xa0

#endif // FBGEN_PamUIMapMarkerEntityData_H
