//
// Generated with FrostbiteGen by Chod
// File: SDK\VFXLocationControl.h
// Created: Wed Mar 10 18:59:33 2021
//

#ifndef FBGEN_VFXLocationControl_H
#define FBGEN_VFXLocationControl_H

#include "LinearTransform.h"
struct VFXLocationControl
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428091E8;
	}
	LinearTransform m_Offset; // 0x0
	int m_Attachment; // 0x40
	bool m_StayAttached; // 0x44
	bool m_PreserveOrientation; // 0x45
	bool m_OffsetFromCharacterForward; // 0x46
	unsigned char _0x47[0x9];
}; // size = 0x50

#endif // FBGEN_VFXLocationControl_H
