//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeTransformOverride.h
// Created: Wed Mar 10 19:04:19 2021
//

#ifndef FBGEN_PamNamedChallengeTransformOverride_H
#define FBGEN_PamNamedChallengeTransformOverride_H

#include "LinearTransform.h"
#include "Guid.h"
struct PamNamedChallengeTransformOverride
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877740;
	}
	LinearTransform m_Transform; // 0x0
	Guid m_ChallengeDataGuid; // 0x40
}; // size = 0x50

#endif // FBGEN_PamNamedChallengeTransformOverride_H
