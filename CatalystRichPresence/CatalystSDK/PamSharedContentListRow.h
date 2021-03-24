//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSharedContentListRow.h
// Created: Wed Mar 10 19:03:52 2021
//

#ifndef FBGEN_PamSharedContentListRow_H
#define FBGEN_PamSharedContentListRow_H

#include "LocalizedString.h"
#include "LinearTransform.h"
#include "PamSharedContentId.h"
#include "DiceUIVectorShapeAsset.h"
#include "PamOnlineIdData.h"
#include "PamListRow.h"

class PamSharedContentListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A340;
	}
	LocalizedString* m_LocalizedName; // 0x18
	LinearTransform m_Transform; // 0x20
	PamSharedContentId m_SharedContentId; // 0x60
	unsigned long m_Date; // 0x78
	unsigned int m_ContentKey; // 0x80
	unsigned char _0x84[0x4];
	DiceUIVectorShapeAsset* m_Icon; // 0x88
	int m_Time; // 0x90
	unsigned char _0x94[0x4];
	PamOnlineIdData* m_CreatedBy; // 0x98
	bool m_Listed; // 0xa0
	bool m_StatIsTime; // 0xa1
	bool m_HasStat; // 0xa2
	unsigned char _0xa3[0xd];
}; // size = 0xb0

#endif // FBGEN_PamSharedContentListRow_H
