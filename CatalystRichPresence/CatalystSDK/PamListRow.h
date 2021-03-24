//
// Generated with FrostbiteGen by Chod
// File: SDK\PamListRow.h
// Created: Wed Mar 10 19:04:26 2021
//

#ifndef FBGEN_PamListRow_H
#define FBGEN_PamListRow_H

#include "DataContainer.h"

class PamListRow :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288ADC0;
	}
	int m_RowDataVersion; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_PamListRow_H
