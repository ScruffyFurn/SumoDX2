#pragma once
// SumoMesh:
// This class derives from MeshObject and creates a ID3D11Buffer of
// vertices and indices to represent a sumoblock.

#include "MeshObject.h"

ref class SumoMesh : public MeshObject
{
internal:
	SumoMesh(_In_ ID3D11Device *device);
};




