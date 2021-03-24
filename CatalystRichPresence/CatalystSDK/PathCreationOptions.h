//
// Generated with FrostbiteGen by Chod
// File: SDK\PathCreationOptions.h
// Created: Wed Mar 10 19:03:17 2021
//

#ifndef FBGEN_PathCreationOptions_H
#define FBGEN_PathCreationOptions_H

#include "Asset.h"

class PathCreationOptions :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428296D0;
	}
	bool m_performInitialNavProbe; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_PathCreationOptions_H
