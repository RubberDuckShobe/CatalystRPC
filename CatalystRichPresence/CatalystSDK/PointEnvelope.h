//
// Generated with FrostbiteGen by Chod
// File: SDK\PointEnvelope.h
// Created: Wed Mar 10 19:03:05 2021
//

#ifndef FBGEN_PointEnvelope_H
#define FBGEN_PointEnvelope_H

#include "Array.h"
#include "DataContainer.h"

class PointEnvelope :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8640;
	}
	Array<PointEnvelopePoint> m_Points; // 0x10
}; // size = 0x18

#endif // FBGEN_PointEnvelope_H
