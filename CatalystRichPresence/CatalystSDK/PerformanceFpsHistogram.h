//
// Generated with FrostbiteGen by Chod
// File: SDK\PerformanceFpsHistogram.h
// Created: Wed Mar 10 19:03:13 2021
//

#ifndef FBGEN_PerformanceFpsHistogram_H
#define FBGEN_PerformanceFpsHistogram_H

struct PerformanceFpsHistogram
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427FBE00;
	}
	float m_Below5; // 0x0
	float m_Below10; // 0x4
	float m_Below15; // 0x8
	float m_Below20; // 0xc
	float m_Below25; // 0x10
	float m_Below30; // 0x14
	float m_Below35; // 0x18
	float m_Below40; // 0x1c
	float m_Below45; // 0x20
	float m_Below50; // 0x24
	float m_Below55; // 0x28
	float m_Below60; // 0x2c
	float m_Above60; // 0x30
}; // size = 0x34

#endif // FBGEN_PerformanceFpsHistogram_H
