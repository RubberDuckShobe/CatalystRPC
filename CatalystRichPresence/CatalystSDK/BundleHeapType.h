//
// Generated with FrostbiteGen by Chod
// File: SDK\BundleHeapType.h
// Created: Wed Mar 10 19:08:23 2021
//

#ifndef FBGEN_BundleHeapType_H
#define FBGEN_BundleHeapType_H

enum BundleHeapType
{
	BundleHeapType_OwnWithParentSmallblock = 0x0,
	BundleHeapType_OwnWithSmallblock = 0x1,
	BundleHeapType_OwnWithoutSmallblock = 0x2,
	BundleHeapType_Parent = 0x3,
	BundleHeapType_Level = 0x4,
	BundleHeapType_Global = 0x5,
	BundleHeapType_Null = 0x6,
};

#endif // FBGEN_BundleHeapType_H
