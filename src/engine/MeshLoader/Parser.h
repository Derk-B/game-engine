#ifndef PARSER_H
#define PARSER_H

#include <glad/glad.h>

class Parser {
    public:
        int parse(const char* file_name, GLfloat*& vertices);
};

#endif