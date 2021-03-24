//
// Generated with FrostbiteGen by Chod
// File: SDK\StreamPoolMapping.h
// Created: Wed Mar 10 19:00:51 2021
//

#ifndef FBGEN_StreamPoolMapping_H
#define FBGEN_StreamPoolMapping_H

#include "StreamPoolAsset.h"
#include "StreamPoolSetup.h"
#include "DataContainer.h"

class StreamPoolMapping :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0E90;
	}
	StreamPoolAsset* m_StreamPool; // 0x10
	StreamPoolSetup* m_StreamPoolSetup; // 0x18
}; // size = 0x20

#endif // FBGEN_StreamPoolMapping_H
