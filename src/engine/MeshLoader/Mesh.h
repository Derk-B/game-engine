#ifndef MESH_H
#define MESH_H

#include <string>
#include <vector>

struct mesh {
    std::string name;
    std::vector<float> vertices;
    std::vector<float> indices;
};

#endif