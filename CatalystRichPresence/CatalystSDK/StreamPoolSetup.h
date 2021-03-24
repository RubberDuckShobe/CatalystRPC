//
// Generated with FrostbiteGen by Chod
// File: SDK\StreamPoolSetup.h
// Created: Wed Mar 10 19:00:51 2021
//

#ifndef FBGEN_StreamPoolSetup_H
#define FBGEN_StreamPoolSetup_H

#include "StreamStarveMode.h"
#include "DataContainer.h"

class StreamPoolSetup :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1310;
	}
	unsigned int m_StreamBufferSizeXenon; // 0x10
	unsigned int m_StreamBufferSizePs3; // 0x14
	unsigned int m_StreamBufferSizeWin32; // 0x18
	unsigned int m_StreamBufferSizeGen4a; // 0x1c
	unsigned int m_StreamBufferSizeGen4b; // 0x20
	unsigned int m_StreamBufferSizeMobile; // 0x24
	unsigned int m_StreamCountXenon; // 0x28
	unsigned int m_StreamCountPs3; // 0x2c
	unsigned int m_StreamCountWin32; // 0x30
	unsigned int m_StreamCountGen4a; // 0x34
	unsigned int m_StreamCountGen4b; // 0x38
	unsigned int m_StreamCountMobile; // 0x3c
	unsigned int m_StreamReadBlockSizeXenon; // 0x40
	unsigned int m_StreamReadBlockSizePs3; // 0x44
	unsigned int m_StreamReadBlockSizeWin32; // 0x48
	unsigned int m_StreamReadBlockSizeGen4a; // 0x4c
	unsigned int m_StreamReadBlockSizeGen4b; // 0x50
	unsigned int m_StreamReadBlockSizeMobile; // 0x54
	StreamStarveMode m_StreamStarveMode; // 0x58
	unsigned char _0x5c[0x4];
}; // size = 0x60

#endif // FBGEN_StreamPoolSetup_H
