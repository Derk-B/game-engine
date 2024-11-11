#include "OBJParser.h"

std::vector<std::string> split(const std::string& str) {
    std::istringstream buffer(str);
    std::vector<std::string> ret;

    std::copy(std::istream_iterator<std::string>(buffer), 
              std::istream_iterator<std::string>(),
              std::back_inserter(ret));

    return ret;
}

std::vector<mesh> OBJParser::parse(const char* file_name, std::vector<GLfloat>& vertices) {
    std::vector<mesh> meshes = std::vector<mesh>();
    
    std::ifstream file(file_name);

    if(!file.is_open()) {
        std::stringstream ss;
        ss << "Failed to open file: " << file_name << std::endl;
        throw std::runtime_error(ss.str());
    }

    std::vector<mesh> meshes;
    mesh meshBuf = { .name = "" };
    std::string line;

    while(std::getline(file, line)) {
        if(line[0] == '#' || line.empty()) {
            continue;
        }

        const char* line_ptr = line.c_str();

        // Object name
        if (line.starts_with("o")) {
            if (meshBuf.name != "") {
                meshes.push_back(meshBuf);
                meshBuf = {};
            }
            char* name;
            sscanf(line_ptr, "%*s %s", name);
            meshBuf.name = name;
        }
        else if (line.starts_with("v")) {
            float x, y, z;
            int scan_count = sscanf(line_ptr, "%*s %f %f %f", &x, &y, &z);

            if (scan_count != 3) {
                throw invalid_argument("Invalid input for obj")
            }
            meshBuf.vertices.push_back(x);
            meshBuf.vertices.push_back(y);
            meshBuf.vertices.push_back(z);
        } else if (line.starts_with("vt")) {

        } else {
            // Ignore other lines for now
            continue;
        }
    }

    return std::vector<mesh>();
}
