#ifndef ABSTRACTPARSER_CLASS_H
#define ABSTRACTPARSER_CLASS_H

#include <glad/glad.h>

class AbstractParser {
    public:
        virtual GLuint* parse();
}

#endif