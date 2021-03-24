//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunnersRoutePercentileListRow.h
// Created: Wed Mar 10 19:04:03 2021
//

#ifndef FBGEN_PamRunnersRoutePercentileListRow_H
#define FBGEN_PamRunnersRoutePercentileListRow_H

#include "LocalizedString.h"
#include "PamListRow.h"

class PamRunnersRoutePercentileListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A8E0;
	}
	LocalizedString* m_LocalizedName; // 0x18
	const char* m_NamedChallengeType; // 0x20
	int m_ContentId; // 0x28
	int m_Percentile; // 0x2c
	int m_Rank; // 0x30
	bool m_HaveResult; // 0x34
	unsigned char _0x35[0x3];
}; // size = 0x38

#endif // FBGEN_PamRunnersRoutePercentileListRow_H
