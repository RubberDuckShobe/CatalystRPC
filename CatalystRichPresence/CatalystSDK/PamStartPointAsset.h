//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStartPointAsset.h
// Created: Wed Mar 10 19:03:47 2021
//

#ifndef FBGEN_PamStartPointAsset_H
#define FBGEN_PamStartPointAsset_H

#include "Array.h"
#include "Asset.h"

class PamStartPointAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142881850;
	}
	Array<StartPointTransformationData> m_StartPointTransformations; // 0x18
	Array<PamStartPointExportData> m_StartPointExports; // 0x20
}; // size = 0x28

#endif // FBGEN_PamStartPointAsset_H
