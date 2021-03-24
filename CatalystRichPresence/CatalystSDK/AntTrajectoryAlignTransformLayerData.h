//
// Generated with FrostbiteGen by Chod
// File: SDK\AntTrajectoryAlignTransformLayerData.h
// Created: Wed Mar 10 19:08:42 2021
//

#ifndef FBGEN_AntTrajectoryAlignTransformLayerData_H
#define FBGEN_AntTrajectoryAlignTransformLayerData_H

#include "FloatTrackData.h"
#include "Array.h"
#include "DiceTransformLayerData.h"

class AntTrajectoryAlignTransformLayerData :
	public DiceTransformLayerData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BFBB0;
	}
	const char* m_ChildBoneName; // 0x40
	FloatTrackData* m_AlignWeight; // 0x48
	Array<BuiltFullAlignTransform> m_BuiltFullAlignTransforms; // 0x50
	bool m_AlignAxisX; // 0x58
	bool m_AlignAxisY; // 0x59
	bool m_AlignAxisZ; // 0x5a
	unsigned char _0x5b[0x5];
}; // size = 0x60

#endif // FBGEN_AntTrajectoryAlignTransformLayerData_H
