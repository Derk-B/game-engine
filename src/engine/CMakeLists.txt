# add_subdirectory(MeshLoader)

set(ENGINE_FILES 
    Camera.cpp
    shaderClass.cpp
    stb.cpp
    texture.cpp
    VAO.cpp
    VBO.cpp
    EBO.cpp)

message(STATUS "cmake root =${CMAKE_SOURCE_DIR}")

add_library(Engine ${ENGINE_FILES})