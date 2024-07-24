#include "pch.h"
#include "Cube.h"

Cube::Cube()
{
    // Define the geometry for a cube.
    m_vertices = {
        { XMFLOAT3(-0.5f, -0.5f, -0.5f), XMFLOAT3(0.0f, 0.0f, 0.0f) },
        { XMFLOAT3(-0.5f, -0.5f,  0.5f), XMFLOAT3(0.0f, 0.0f, 1.0f) },
        { XMFLOAT3(-0.5f,  0.5f, -0.5f), XMFLOAT3(0.0f, 1.0f, 0.0f) },
        { XMFLOAT3(-0.5f,  0.5f,  0.5f), XMFLOAT3(0.0f, 1.0f, 1.0f) },
        { XMFLOAT3(0.5f, -0.5f, -0.5f), XMFLOAT3(1.0f, 0.0f, 0.0f) },
        { XMFLOAT3(0.5f, -0.5f,  0.5f), XMFLOAT3(1.0f, 0.0f, 1.0f) },
        { XMFLOAT3(0.5f,  0.5f, -0.5f), XMFLOAT3(1.0f, 1.0f, 0.0f) },
        { XMFLOAT3(0.5f,  0.5f,  0.5f), XMFLOAT3(1.0f, 1.0f, 1.0f) },
    };

    m_indices = {
        0, 2, 1, // -x
        1, 2, 3,
        4, 5, 6, // +x
        5, 7, 6,
        0, 1, 5, // -y
        0, 5, 4,
        2, 6, 7, // +y
        2, 7, 3,
        0, 4, 6, // -z
        0, 6, 2,
        1, 3, 7, // +z
        1, 7, 5,
    };
}

const std::vector<VertexPositionColor>& Cube::GetVertices() const
{
    return m_vertices;
}

const std::vector<unsigned short>& Cube::GetIndices() const
{
    return m_indices;
}
