//
// Generated with FrostbiteGen by Chod
// File: SDK\DestructionVolumeData.h
// Created: Wed Mar 10 19:07:13 2021
//

#ifndef FBGEN_DestructionVolumeData_H
#define FBGEN_DestructionVolumeData_H

#include "DestructionVolumeAsset.h"
#include "AxisAlignedBox.h"
#include "Array.h"
#include "DataContainer.h"

class DestructionVolumeData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842A90;
	}
	DestructionVolumeAsset* m_Asset; // 0x10
	Array<Vec4> m_Impacts; // 0x18
	AxisAlignedBox m_BoundingBox; // 0x20
	Array<unsigned int> m_PartToImpactIndices; // 0x40
	unsigned char _0x48[0x8];
}; // size = 0x50

#endif // FBGEN_DestructionVolumeData_H
