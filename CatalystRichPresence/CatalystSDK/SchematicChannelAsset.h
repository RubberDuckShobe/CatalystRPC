//
// Generated with FrostbiteGen by Chod
// File: SDK\SchematicChannelAsset.h
// Created: Wed Mar 10 19:02:31 2021
//

#ifndef FBGEN_SchematicChannelAsset_H
#define FBGEN_SchematicChannelAsset_H

#include "Array.h"
#include "Asset.h"

class SchematicChannelAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7A30;
	}
	Array<EventChannel> m_Events; // 0x18
	Array<LinkChannel> m_Links; // 0x20
	Array<PropertyChannel> m_Properties; // 0x28
}; // size = 0x30

#endif // FBGEN_SchematicChannelAsset_H
