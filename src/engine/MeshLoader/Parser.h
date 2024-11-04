#ifndef PARSER_H
#define PARSER_H

#include <glad/glad.h>

class Parser {
    public:
        virtual ~Parser() = default;
        virtual int parse(const char* file_name, GLfloat* vertices) = 0;
};

#endif