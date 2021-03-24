//
// Generated with FrostbiteGen by Chod
// File: SDK\DensityMap_FilterType.h
// Created: Wed Mar 10 19:07:15 2021
//

#ifndef FBGEN_DensityMap_FilterType_H
#define FBGEN_DensityMap_FilterType_H

enum DensityMap_FilterType
{
	DensityMapFilter_SecondOrderDifference = 0x0,
	DensityMapFilter_GaussianCurvature = 0x1,
	DensityMapFilter_MeanCurvature = 0x2,
	DensityMapFilter_LaplaceBeltrami = 0x3,
	DensityMapFilter_LaplaceBeltramiNoVoronoi = 0x4,
};

#endif // FBGEN_DensityMap_FilterType_H
