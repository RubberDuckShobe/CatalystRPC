//
// Generated with FrostbiteGen by Chod
// File: SDK\LinearMediaBillboardFeedEntityData.h
// Created: Wed Mar 10 19:06:16 2021
//

#ifndef FBGEN_LinearMediaBillboardFeedEntityData_H
#define FBGEN_LinearMediaBillboardFeedEntityData_H

#include "LMSBillboardAsset.h"
#include "Array.h"
#include "EntityData.h"

class LinearMediaBillboardFeedEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142847850;
	}
	int m_EmittingChannel; // 0x18
	unsigned char _0x1c[0x4];
	Array<LinearMediaLODCodes> m_TextureCodes; // 0x20
	LMSBillboardAsset* m_LinearMediaBillboardAsset; // 0x28
	unsigned int m_NumSpeakers; // 0x30
	float m_ExternalTime; // 0x34
	Array<int> m_SubresourceIndices; // 0x38
	bool m_StartOnLoad; // 0x40
	bool m_Loop; // 0x41
	unsigned char _0x42[0x6];
}; // size = 0x48

#endif // FBGEN_LinearMediaBillboardFeedEntityData_H
