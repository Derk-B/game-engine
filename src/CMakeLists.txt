cmake_minimum_required(VERSION 3.10)
project(Guardian_of_the_grove)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

find_package(glfw3 3.3 REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/assets)

add_library(glad INTERFACE)
target_include_directories(glad INTERFACE /usr/local/include/glad)

add_executable(Guardian_of_the_grove 
main.cpp 
engine/texture.h
lib/glad.c
lib/stb/stb_image.h
${SOURCES}
# engine/Camera.cpp
# engine/shaderClass.cpp
# engine/stb.cpp
# engine/texture.cpp
# engine/VAO.cpp
# engine/VBO.cpp
# engine/EBO.cpp
)

add_subdirectory(Engine)
add_definitions(-DGLM_ENABLE_EXPERIMENTAL)

target_include_directories(Guardian_of_the_grove PRIVATE "lib/stb")
target_link_libraries(Guardian_of_the_grove 
    glfw
    glad
    Engine
)