//
// Generated with FrostbiteGen by Chod
// File: SDK\AIWaypointExtraCreatureLoco.h
// Created: Wed Mar 10 19:08:52 2021
//

#ifndef FBGEN_AIWaypointExtraCreatureLoco_H
#define FBGEN_AIWaypointExtraCreatureLoco_H

struct AIWaypointExtraCreatureLoco
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BB9C0;
	}
	float m_Radius; // 0x0
	float m_DesiredFacing; // 0x4
	int m_SpeedLevel; // 0x8
	bool m_Attack; // 0xc
	bool m_Stop; // 0xd
	bool m_Backwards; // 0xe
	unsigned char _0xf[0x1];
}; // size = 0x10

#endif // FBGEN_AIWaypointExtraCreatureLoco_H
