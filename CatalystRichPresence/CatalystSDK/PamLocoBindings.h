//
// Generated with FrostbiteGen by Chod
// File: SDK\PamLocoBindings.h
// Created: Wed Mar 10 19:04:25 2021
//

#ifndef FBGEN_PamLocoBindings_H
#define FBGEN_PamLocoBindings_H

#include "FineMovementDataClass.h"
#include "MeleeDataClass.h"
#include "DeployDataClass.h"
#include "StopAnimationDataClass.h"
#include "PathLinkDataClass.h"
#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamLocoBindings :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CA80;
	}
	FineMovementDataClass* m_FineMovementData; // 0x18
	MeleeDataClass* m_MeleeData; // 0x20
	DeployDataClass* m_DeployData; // 0x28
	StopAnimationDataClass* m_StopAnimationData; // 0x30
	PathLinkDataClass* m_PathLinkData; // 0x38
	Array<PathLinkAnimationBinding*> m_PathLinkMappings; // 0x40
}; // size = 0x48

#endif // FBGEN_PamLocoBindings_H
