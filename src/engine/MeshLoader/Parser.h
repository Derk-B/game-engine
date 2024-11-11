#ifndef PARSER_H
#define PARSER_H

#include <glad/glad.h>
#include <vector>
#include "Mesh.h"

class Parser {
    public:
        std::vector<mesh> parse(const char* file_name, std::vector<GLfloat>& vertices);
};

#endif