//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunnerKitListRow.h
// Created: Wed Mar 10 19:04:03 2021
//

#ifndef FBGEN_PamRunnerKitListRow_H
#define FBGEN_PamRunnerKitListRow_H

#include "LocalizedString.h"
#include "PamListRow.h"

class PamRunnerKitListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889560;
	}
	LocalizedString* m_ItemDescription; // 0x18
	const char* m_ItemTextureId; // 0x20
	int m_ListIndex; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamRunnerKitListRow_H
