#ifndef OBJ_PARSER_H
#define OBJ_PARSER_H

#include "Parser.h"

class OBJParser : public Parser {
    public:
        int parse(const char* file_name, GLfloat*& vertices);
};

#endif