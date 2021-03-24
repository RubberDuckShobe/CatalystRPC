//
// Generated with FrostbiteGen by Chod
// File: SDK\PamReputationGatesData.h
// Created: Wed Mar 10 19:04:05 2021
//

#ifndef FBGEN_PamReputationGatesData_H
#define FBGEN_PamReputationGatesData_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamReputationGatesData :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873060;
	}
	Array<float> m_ReputationGateValues; // 0x18
}; // size = 0x20

#endif // FBGEN_PamReputationGatesData_H
