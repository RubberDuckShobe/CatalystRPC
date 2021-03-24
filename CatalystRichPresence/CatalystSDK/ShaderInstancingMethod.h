//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderInstancingMethod.h
// Created: Wed Mar 10 19:01:34 2021
//

#ifndef FBGEN_ShaderInstancingMethod_H
#define FBGEN_ShaderInstancingMethod_H

enum ShaderInstancingMethod
{
	ShaderInstancingMethod_Default = 0x0,
	ShaderInstancingMethod_None = 0x1,
	ShaderInstancingMethod_ObjectTransform4x3Half = 0x2,
	ShaderInstancingMethod_ObjectTransform4x3InstanceData4x1Half = 0x3,
	ShaderInstancingMethod_ObjectTransform4x3InstanceData4x2Half = 0x4,
	ShaderInstancingMethod_WorldTransform4x3Float = 0x5,
	ShaderInstancingMethod_WorldTransform4x3FloatInstanceData4x2Half = 0x6,
	ShaderInstancingMethod_PrevWorldTransform4x3FloatInstanceData4x2Half = 0x7,
	ShaderInstancingMethod_ObjectTranslationScaleHalf = 0x8,
	ShaderInstancingMethod_ObjectTranslationScaleHalfInstanceData4x1Half = 0x9,
	ShaderInstancingMethod_ObjectTranslationScaleHalfInstanceData4x2Half = 0xa,
	ShaderInstancingMethod_PositionStream = 0xb,
	ShaderInstancingMethod_PositionStreamAux = 0xc,
	ShaderInstancingMethod_LinearMediaStreaming = 0xd,
	ShaderInstancingMethod_DxBuffer = 0xe,
	ShaderInstancingMethod_DxBufferInstanceData4x1Float = 0xf,
	ShaderInstancingMethod_DxBufferInstanceData4x2Float = 0x10,
	ShaderInstancingMethod_Manual = 0x11,
	ShaderInstancingMethodCount = 0x12,
};

#endif // FBGEN_ShaderInstancingMethod_H
