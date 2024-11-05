# add_subdirectory(MeshLoader)

set(ENGINE_FILES 
    Camera.cpp
    shaderClass.cpp
    stb.cpp
    texture.cpp
    VAO.cpp
    VBO.cpp
    EBO.cpp)

add_subdirectory(MeshLoader)

add_library(engine ${ENGINE_FILES})

target_include_directories(engine PUBLIC ${CMAKE_SOURCE_DIR}/lib/stb)