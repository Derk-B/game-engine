#ifndef MODEL_CLASS_H
#define MODEL_CLASS_H

#include "Mesh.h"

class Model {
    public:
        Model();
        int getData(const char* path, std::vector<glm::vec3>& out_vertices, std::vector<glm::vec2>& out_uvs, std::vector<glm::vec3>& out_normals);

    private:
        const char* file;
        std::string text;
        std::vector<unsigned char> data;

};

#endif