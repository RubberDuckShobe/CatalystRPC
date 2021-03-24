//
// Generated with FrostbiteGen by Chod
// File: SDK\AntRefInfo.h
// Created: Wed Mar 10 19:08:42 2021
//

#ifndef FBGEN_AntRefInfo_H
#define FBGEN_AntRefInfo_H

#include "Guid.h"
#include "AntRef.h"
struct AntRefInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C2D48;
	}
	Guid m_FrostbitePartition; // 0x0
	AntRef m_AntRef; // 0x10
}; // size = 0x24

#endif // FBGEN_AntRefInfo_H
