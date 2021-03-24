//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdatePass.h
// Created: Wed Mar 10 18:59:36 2021
//

#ifndef FBGEN_UpdatePass_H
#define FBGEN_UpdatePass_H

enum UpdatePass
{
	UpdatePass_PreSim = 0x0,
	UpdatePass_PostSim = 0x1,
	UpdatePass_PostFrame = 0x2,
	UpdatePass_FrameInterpolation = 0x3,
	UpdatePass_PreInput = 0x4,
	UpdatePass_PreFrame = 0x5,
	UpdatePass_PreAnimation = 0x6,
	UpdatePass_AnimationAttach = 0x7,
	UpdatePass_PostAnimation = 0x8,
	UpdatePass_Count = 0x9,
};

#endif // FBGEN_UpdatePass_H
