set(ENGINE_FILES 
    MeshLoader/OBJParser.cpp
    MeshLoader/Parser.cpp
    MeshLoader/Mesh.h
    Camera.cpp
    shaderClass.cpp
    stb.cpp
    texture.cpp
    VAO.cpp
    VBO.cpp
    EBO.cpp)

# add_subdirectory(MeshLoader)
add_definitions(-DGLM_ENABLE_EXPERIMENTAL)
add_library(engine ${ENGINE_FILES})

target_include_directories(engine PUBLIC ${CMAKE_SOURCE_DIR}/lib/stb PUBLIC /usr/local/include)