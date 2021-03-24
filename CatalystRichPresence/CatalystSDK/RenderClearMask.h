//
// Generated with FrostbiteGen by Chod
// File: SDK\RenderClearMask.h
// Created: Wed Mar 10 19:02:38 2021
//

#ifndef FBGEN_RenderClearMask_H
#define FBGEN_RenderClearMask_H

enum RenderClearMask
{
	RenderClearMask_Color0 = 0x1,
	RenderClearMask_Color1 = 0x2,
	RenderClearMask_Color2 = 0x4,
	RenderClearMask_Color3 = 0x8,
	RenderClearMask_Color4 = 0x10,
	RenderClearMask_Color5 = 0x20,
	RenderClearMask_Color6 = 0x40,
	RenderClearMask_Color7 = 0x80,
	RenderClearMask_Depth = 0x100,
	RenderClearMask_Stencil = 0x200,
	RenderClearMask_Color = 0xff,
	RenderClearMask_All = 0x3ff,
	RenderClearMask_None = 0x0,
};

#endif // FBGEN_RenderClearMask_H
