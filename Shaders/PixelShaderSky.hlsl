//// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//// PARTICULAR PURPOSE.
////
//// Copyright (c) Microsoft Corporation. All rights reserved

#include "ConstantBuffers.hlsli"

float4 main(PixelShaderSkyInput input) : SV_Target
{
	return skyMap.Sample(linearSampler, input.texCoord);
	//return diffuseTexture.Sample(linearSampler, input.texCoord);
	//return float4(1,1,1,1);
}
