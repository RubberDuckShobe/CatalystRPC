//
// Generated with FrostbiteGen by Chod
// File: SDK\TonemapComponentData.h
// Created: Wed Mar 10 19:00:12 2021
//

#ifndef FBGEN_TonemapComponentData_H
#define FBGEN_TonemapComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "TonemapMethod.h"
#include "BloomMethod.h"
#include "BloomDirection.h"
#include "TextureAsset.h"
#include "VisualEnvironmentComponentData.h"

class TonemapComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142838480;
	}
	Vec3 m_BloomScale; // 0x80
	Vec3 m_Gaussian1Color; // 0x90
	Vec3 m_Gaussian2Color; // 0xa0
	Vec3 m_Gaussian3Color; // 0xb0
	Vec3 m_Gaussian4Color; // 0xc0
	Vec3 m_Gaussian5Color; // 0xd0
	Vec3 m_LensDirtBias; // 0xe0
	Vec3 m_LensDirtFactor; // 0xf0
	Vec3 m_LensDirtExponent; // 0x100
	Realm m_Realm; // 0x110
	float m_EV; // 0x114
	float m_ExposureCompensation; // 0x118
	float m_AutoExposureDarkestExclude; // 0x11c
	float m_AutoExposureBrightestExclude; // 0x120
	float m_DarkAdaptationTime; // 0x124
	float m_LightAdaptationTime; // 0x128
	float m_AutoExposureHigherThreshold; // 0x12c
	float m_AutoExposureLowerThreshold; // 0x130
	float m_MinEV; // 0x134
	float m_MaxEV; // 0x138
	float m_SpotMeterScale; // 0x13c
	TonemapMethod m_TonemapMethod; // 0x140
	float m_BlackPoint; // 0x144
	float m_WhitePoint; // 0x148
	float m_CrossOverPoint; // 0x14c
	float m_ToeStrength; // 0x150
	float m_ShoulderStrength; // 0x154
	float m_SplitScreen; // 0x158
	float m_BlackIn; // 0x15c
	float m_WhiteIn; // 0x160
	float m_BlackOut; // 0x164
	float m_WhiteOut; // 0x168
	float m_WhiteLevel; // 0x16c
	float m_WhiteClip; // 0x170
	BloomMethod m_BloomMethod; // 0x174
	BloomDirection m_BloomDirection; // 0x178
	float m_GaussianClamp; // 0x17c
	float m_GaussianSharpness; // 0x180
	float m_Gaussian1Weight; // 0x184
	float m_Gaussian2Weight; // 0x188
	float m_Gaussian3Weight; // 0x18c
	float m_Gaussian4Weight; // 0x190
	float m_Gaussian5Weight; // 0x194
	float m_FFTThreshold; // 0x198
	float m_FFTCutoff; // 0x19c
	float m_FFTKernelScale; // 0x1a0
	float m_FFTKernelRotation; // 0x1a4
	float m_FFTSpikeScaleLimit; // 0x1a8
	unsigned char _0x1ac[0x4];
	TextureAsset* m_FFTKernelTexture; // 0x1b0
	float m_ChromostereopsisScale; // 0x1b8
	float m_ChromostereopsisOffset; // 0x1bc
	TextureAsset* m_LensDirtTexture; // 0x1c0
	bool m_AutomaticExposure; // 0x1c8
	bool m_ClampEV; // 0x1c9
	bool m_FFTSpikeScaleLimitEnable; // 0x1ca
	bool m_ChromostereopsisEnable; // 0x1cb
	unsigned char _0x1cc[0x4];
}; // size = 0x1d0

#endif // FBGEN_TonemapComponentData_H
