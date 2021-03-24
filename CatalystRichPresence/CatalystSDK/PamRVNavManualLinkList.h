//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRVNavManualLinkList.h
// Created: Wed Mar 10 19:04:08 2021
//

#ifndef FBGEN_PamRVNavManualLinkList_H
#define FBGEN_PamRVNavManualLinkList_H

#include "Array.h"
#include "Asset.h"

class PamRVNavManualLinkList :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873F60;
	}
	Array<PamRVNavLink*> m_links; // 0x18
	Array<PamRVNavLink*> m_deniedLinks; // 0x20
}; // size = 0x28

#endif // FBGEN_PamRVNavManualLinkList_H
