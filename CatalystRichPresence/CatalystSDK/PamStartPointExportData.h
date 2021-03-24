//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStartPointExportData.h
// Created: Wed Mar 10 19:03:47 2021
//

#ifndef FBGEN_PamStartPointExportData_H
#define FBGEN_PamStartPointExportData_H

#include "PamStartpointExportType.h"
struct PamStartPointExportData
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428803D0;
	}
	PamStartpointExportType m_ExportType; // 0x0
	unsigned char _0x4[0x4];
	const char* m_Sid; // 0x8
	const char* m_StartPointName; // 0x10
}; // size = 0x18

#endif // FBGEN_PamStartPointExportData_H
