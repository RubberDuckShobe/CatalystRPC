//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeMapIconData.h
// Created: Wed Mar 10 19:04:20 2021
//

#ifndef FBGEN_PamNamedChallengeMapIconData_H
#define FBGEN_PamNamedChallengeMapIconData_H

#include "DiceUIVectorShapeAsset.h"
#include "PamSharedContentMapIconData.h"

class PamNamedChallengeMapIconData :
	public PamSharedContentMapIconData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877BE0;
	}
	int m_Stars; // 0x20
	unsigned char _0x24[0x4];
	DiceUIVectorShapeAsset* m_CompletedIconShape; // 0x28
	bool m_PlayerHasPlayed; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_PamNamedChallengeMapIconData_H
