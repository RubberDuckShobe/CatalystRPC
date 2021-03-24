//
// Generated with FrostbiteGen by Chod
// File: SDK\PamTextMessage.h
// Created: Wed Mar 10 19:03:42 2021
//

#ifndef FBGEN_PamTextMessage_H
#define FBGEN_PamTextMessage_H

#include "PamBackendTextMessageType.h"
struct PamTextMessage
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428727A0;
	}
	long m_TimeStamp; // 0x0
	PamBackendTextMessageType m_TextMessageType; // 0x8
	unsigned char _0xc[0x4];
	const char* m_Text; // 0x10
	unsigned int m_TextHash; // 0x18
	bool m_IsFromFriend; // 0x1c
	bool m_IsFromFollowed; // 0x1d
	unsigned char _0x1e[0x22];
}; // size = 0x40

#endif // FBGEN_PamTextMessage_H
