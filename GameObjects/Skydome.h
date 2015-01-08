//// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//// PARTICULAR PURPOSE.
////
//// Copyright (c) Microsoft Corporation. All rights reserved

#pragma once

// Skydome:
// This class is a specialization of GameObject that represents a sphere primitive.
// The sphere is defined by a 'position' and radius.

#include "GameObject.h"

ref class Skydome: public GameObject
{
internal:
	Skydome();
	Skydome(DirectX::XMFLOAT3 pos, float radius);

    void Position(DirectX::XMFLOAT3 position);
    void Position(DirectX::XMVECTOR position);
    void Radius(float radius);
    float Radius();

private:
    void Update();

    float m_radius;
};


__forceinline void Skydome::Position(DirectX::XMFLOAT3 position)
{
    m_position = position;
    Update();
}

__forceinline void Skydome::Position(DirectX::XMVECTOR position)
{
    DirectX::XMStoreFloat3(&m_position, position);
    Update();
}

__forceinline void Skydome::Radius(float radius)
{
    m_radius = radius;
    Update();
}

__forceinline float Skydome::Radius()
{
    return m_radius;
}