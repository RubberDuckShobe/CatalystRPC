//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapBridgeVisualiserEntityData.h
// Created: Wed Mar 10 19:04:24 2021
//

#ifndef FBGEN_PamMapBridgeVisualiserEntityData_H
#define FBGEN_PamMapBridgeVisualiserEntityData_H

#include "PamUIMapMarkerDefinition.h"
#include "Array.h"
#include "EntityData.h"

class PamMapBridgeVisualiserEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880B30;
	}
	PamUIMapMarkerDefinition* m_LockedMapMarkerDefinition; // 0x18
	PamUIMapMarkerDefinition* m_ZiplineMapMarkerDefinition; // 0x20
	PamUIMapMarkerDefinition* m_MagRopeMapMarkerDefinition; // 0x28
	PamUIMapMarkerDefinition* m_GenericMapMarkerDefinition; // 0x30
	Array<PamMapBridgeNode> m_nodes; // 0x38
	bool m_Visible; // 0x40
	unsigned char _0x41[0x7];
}; // size = 0x48

#endif // FBGEN_PamMapBridgeVisualiserEntityData_H
