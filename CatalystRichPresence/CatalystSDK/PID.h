//
// Generated with FrostbiteGen by Chod
// File: SDK\PID.h
// Created: Wed Mar 10 19:05:22 2021
//

#ifndef FBGEN_PID_H
#define FBGEN_PID_H

struct PID
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280F6D8;
	}
	float m_P; // 0x0
	float m_I; // 0x4
	float m_D; // 0x8
	float m_MaxError; // 0xc
	float m_MaxPTerm; // 0x10
	float m_MaxITerm; // 0x14
	float m_MaxDTerm; // 0x18
	float m_MaxSumError; // 0x1c
}; // size = 0x20

#endif // FBGEN_PID_H
