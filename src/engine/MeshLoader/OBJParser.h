#ifndef OBJ_PARSER_H
#define OBJ_PARSER_H

#include "Parser.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>
#include <filesystem>
#include <stdexcept>

class OBJParser : public Parser {
    public:
        std::vector<mesh> parse(const char* file_name, std::vector<GLfloat>& vertices);
};

#endif