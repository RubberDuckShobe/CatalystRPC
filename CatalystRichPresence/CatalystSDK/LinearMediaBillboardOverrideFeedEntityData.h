//
// Generated with FrostbiteGen by Chod
// File: SDK\LinearMediaBillboardOverrideFeedEntityData.h
// Created: Wed Mar 10 19:06:16 2021
//

#ifndef FBGEN_LinearMediaBillboardOverrideFeedEntityData_H
#define FBGEN_LinearMediaBillboardOverrideFeedEntityData_H

#include "Array.h"
#include "LinearMediaBillboardFeedEntityData.h"

class LinearMediaBillboardOverrideFeedEntityData :
	public LinearMediaBillboardFeedEntityData // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428477F0;
	}
	Array<int> m_ChannelsToOverride; // 0x48
}; // size = 0x50

#endif // FBGEN_LinearMediaBillboardOverrideFeedEntityData_H
