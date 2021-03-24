//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshSubsetCategoryFlags.h
// Created: Wed Mar 10 19:05:54 2021
//

#ifndef FBGEN_MeshSubsetCategoryFlags_H
#define FBGEN_MeshSubsetCategoryFlags_H

enum MeshSubsetCategoryFlags
{
	MeshSubsetCategoryFlags_Opaque = 0x1,
	MeshSubsetCategoryFlags_Transparent = 0x2,
	MeshSubsetCategoryFlags_TransparentDecal = 0x4,
	MeshSubsetCategoryFlags_ZOnly = 0x8,
	MeshSubsetCategoryFlags_Shadow = 0x10,
	MeshSubsetCategoryFlags_DynamicReflection = 0x20,
	MeshSubsetCategoryFlags_PlanarReflection = 0x40,
	MeshSubsetCategoryFlags_StaticReflection = 0x80,
	MeshSubsetCategoryFlags_ShadowOverride = 0x100,
	MeshSubsetCategoryFlags_DynamicReflectionOverride = 0x200,
	MeshSubsetCategoryFlags_PlanarReflectionOverride = 0x400,
	MeshSubsetCategoryFlags_StaticReflectionOverride = 0x800,
	MeshSubsetCategoryFlags_Normal = 0x7,
	MeshSubsetCategoryFlags_All = 0xffff,
};

#endif // FBGEN_MeshSubsetCategoryFlags_H
