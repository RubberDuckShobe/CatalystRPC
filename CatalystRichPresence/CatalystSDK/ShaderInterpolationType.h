//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderInterpolationType.h
// Created: Wed Mar 10 19:01:34 2021
//

#ifndef FBGEN_ShaderInterpolationType_H
#define FBGEN_ShaderInterpolationType_H

enum ShaderInterpolationType
{
	ShaderInterpolationType_Linear = 0x0,
	ShaderInterpolationType_Centroid = 0x1,
	ShaderInterpolationType_NoInterpolation = 0x2,
	ShaderInterpolationType_NoPerspective = 0x3,
	ShaderInterpolationType_Sample = 0x4,
	ShaderInterpolationType_Count = 0x5,
	ShaderInterpolationType_Mask = 0xff,
	ShaderInterpolationType_DomainManual = 0x100,
	ShaderInterpolationType_VertexOnly = 0x200,
	ShaderInterpolationType_VertexHullOnly = 0x400,
	ShaderInterpolationType_VertexHullDomainOnly = 0x800,
};

#endif // FBGEN_ShaderInterpolationType_H
