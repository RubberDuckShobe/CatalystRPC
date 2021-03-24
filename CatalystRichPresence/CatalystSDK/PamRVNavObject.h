//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRVNavObject.h
// Created: Wed Mar 10 19:04:08 2021
//

#ifndef FBGEN_PamRVNavObject_H
#define FBGEN_PamRVNavObject_H

#include "Guid.h"
#include "Array.h"
#include "PamProgressionFlagGroup.h"
#include "PamProgressionFlag.h"
#include "DataContainer.h"

class PamRVNavObject :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142874020;
	}
	Guid m_RVObjectGuid; // 0x10
	Array<Guid> m_ParentGuidTree; // 0x20
	Guid m_pamGameplayLink; // 0x28
	Array<PamRVNavObjectSubNode> m_nodes; // 0x38
	PamProgressionFlagGroup* m_FlagGroup; // 0x40
	PamProgressionFlag* m_Flag; // 0x48
}; // size = 0x50

#endif // FBGEN_PamRVNavObject_H
