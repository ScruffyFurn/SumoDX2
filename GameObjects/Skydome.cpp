//// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//// PARTICULAR PURPOSE.
////
//// Copyright (c) Microsoft Corporation. All rights reserved

#include "pch.h"
#include "Skydome.h"

using namespace DirectX;

//----------------------------------------------------------------------

Skydome::Skydome()
{
    m_position = XMFLOAT3(0.0f, 0.0f, 0.0f);
    m_radius = 1.0f;
    Update();
}

//----------------------------------------------------------------------

Skydome::Skydome(
    DirectX::XMFLOAT3 position,
    float radius
    )
{
    m_position = position;
    m_radius = radius;
    Update();
}

//----------------------------------------------------------------------

void Skydome::Update()
{
    XMStoreFloat4x4(
        &m_modelMatrix,
        XMMatrixScaling(m_radius, m_radius, m_radius) *
        XMMatrixTranslation(m_position.x, m_position.y, m_position.z)
        );
}


