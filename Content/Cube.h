#pragma once

#include <DirectXMath.h>
#include <vector>

using namespace DirectX;

struct VertexPositionColor
{
    XMFLOAT3 position;
    XMFLOAT3 color;
};

class Cube
{
public:
    Cube();
    const std::vector<VertexPositionColor>& GetVertices() const;
    const std::vector<unsigned short>& GetIndices() const;

private:
    std::vector<VertexPositionColor> m_vertices;
    std::vector<unsigned short> m_indices;
};
