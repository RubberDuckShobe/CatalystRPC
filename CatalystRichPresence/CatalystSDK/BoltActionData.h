//
// Generated with FrostbiteGen by Chod
// File: SDK\BoltActionData.h
// Created: Wed Mar 10 19:08:26 2021
//

#ifndef FBGEN_BoltActionData_H
#define FBGEN_BoltActionData_H

struct BoltActionData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D420;
	}
	float m_BoltActionDelay; // 0x0
	float m_BoltActionTime; // 0x4
	bool m_HoldBoltActionUntilFireRelease; // 0x8
	bool m_HoldBoltActionUntilZoomRelease; // 0x9
	bool m_ForceBoltActionOnFireTrigger; // 0xa
	bool m_UnZoomOnBoltAction; // 0xb
	bool m_ReturnToZoomAfterBoltAction; // 0xc
	unsigned char _0xd[0x3];
}; // size = 0x10

#endif // FBGEN_BoltActionData_H
