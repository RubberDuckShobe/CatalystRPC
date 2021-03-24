//
// Generated with FrostbiteGen by Chod
// File: SDK\Dx11DisplaySettings.h
// Created: Wed Mar 10 19:07:07 2021
//

#ifndef FBGEN_Dx11DisplaySettings_H
#define FBGEN_Dx11DisplaySettings_H

#include "DxDisplaySettings.h"

class Dx11DisplaySettings :
	public DxDisplaySettings // size = 0xb8
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428353E0;
	}
	unsigned int m_StagingBufferPoolItemSizeMin; // 0xb8
	unsigned int m_StagingBufferPoolItemSizeMax; // 0xbc
	unsigned int m_StagingBufferPoolHeapMemBlockSize; // 0xc0
	float m_StagingBufferPoolItemMaxAge; // 0xc4
	const char* m_StagingBufferPoolPreheatString; // 0xc8
	bool m_RefDriverEnable; // 0xd0
	bool m_DriverInternalThreadingEnable; // 0xd1
	bool m_GetDeviceRemovedReasonEnable; // 0xd2
	bool m_DrawMemoryGraph; // 0xd3
	bool m_MemoryPoolsEnable; // 0xd4
	bool m_NvPerfHudEnable; // 0xd5
	bool m_AnnotationInterfaceEnable; // 0xd6
	bool m_AmdQuadsEnable; // 0xd7
	bool m_DepthBoundsExtensionEnable; // 0xd8
	bool m_Dx11Dot1Enable; // 0xd9
	bool m_Dx11Dot1RuntimeEnable; // 0xda
	bool m_EndFrameJobEnable; // 0xdb
	bool m_DepthStencilExtensionEnable; // 0xdc
	bool m_ForceRenderTargetInEsramTest; // 0xdd
	bool m_ReZEnable; // 0xde
	bool m_UseStagingResourcePool; // 0xdf
	bool m_ReleaseCmdJobsEnable; // 0xe0
	bool m_GpuProfilerEnable; // 0xe1
	unsigned char _0xe2[0x6];
}; // size = 0xe8

#endif // FBGEN_Dx11DisplaySettings_H
