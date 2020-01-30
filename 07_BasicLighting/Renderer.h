#pragma once

#include <GL/glew.h>

#include "GLCall.h"

#include "VertexArray.h"
#include "IndexBuffer.h"
#include "Shader.h"
#include "Model.h"

class Renderer {
    public:
        void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const;
        void Draw(Model& model, Shader& shader);
        void Clear() const;
};
