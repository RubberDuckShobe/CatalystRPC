//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTBoneTrackData.h
// Created: Wed Mar 10 19:08:51 2021
//

#ifndef FBGEN_ANTBoneTrackData_H
#define FBGEN_ANTBoneTrackData_H

#include "LayeredTransformTrackData.h"

class ANTBoneTrackData :
	public LayeredTransformTrackData // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142822550;
	}
	const char* m_BoneName; // 0x48
	bool m_ApplyLayeredTransform; // 0x50
	bool m_RelativeToParent; // 0x51
	bool m_RelativeToParentConvert; // 0x52
	unsigned char _0x53[0x5];
}; // size = 0x58

#endif // FBGEN_ANTBoneTrackData_H
