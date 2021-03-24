//
// Generated with FrostbiteGen by Chod
// File: SDK\EvaluatorType.h
// Created: Wed Mar 10 19:06:54 2021
//

#ifndef FBGEN_EvaluatorType_H
#define FBGEN_EvaluatorType_H

enum EvaluatorType
{
	EtNone = 0x0,
	EtDefault = 0x1,
	EtBox = 0x2,
	EtPolynomial = 0x3,
	EtPolynomialOperator = 0x4,
	EtSpline = 0x5,
	EtRandom = 0x6,
	EtRandomXYZ = 0x7,
	EtRotateVector = 0x8,
	EtSampleTexture = 0x9,
	EtSphere = 0xa,
	EtSuperSphere = 0xb,
	EtConstant = 0xc,
	EtPolynomialColorInterp = 0xd,
	EtMultiColorInterp = 0xe,
	EtCamProx = 0xf,
	EtRandomXYZW = 0x10,
	EtPivotBox = 0x11,
	EtPivotSphere = 0x12,
	EtPivotSuperSphere = 0x13,
	EvaluatorTypeCount = 0x14,
};

#endif // FBGEN_EvaluatorType_H
