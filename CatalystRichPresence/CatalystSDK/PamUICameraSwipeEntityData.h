//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUICameraSwipeEntityData.h
// Created: Wed Mar 10 19:03:39 2021
//

#ifndef FBGEN_PamUICameraSwipeEntityData_H
#define FBGEN_PamUICameraSwipeEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class PamUICameraSwipeEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A6A0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_SwipeOutStartTransform; // 0x20
	LinearTransform m_SwipeBackStartTransform; // 0x60
	float m_VerticalAmount; // 0xa0
	float m_HorizontalAmount; // 0xa4
	float m_SwipeTime; // 0xa8
	bool m_UseRealTimeClock; // 0xac
	unsigned char _0xad[0x3];
}; // size = 0xb0

#endif // FBGEN_PamUICameraSwipeEntityData_H
