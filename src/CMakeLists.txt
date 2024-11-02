cmake_minimum_required(VERSION 3.10)
project(Guardian_of_the_grove)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

find_package(glfw3 3.3 REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/assets)

file(GLOB SOURCES "engine/*.cpp")

add_executable(Guardian_of_the_grove 
main.cpp 
engine/texture.h
lib/glad.c
lib/stb/stb_image.h
${SOURCES}
)

target_include_directories(Guardian_of_the_grove PRIVATE "lib/stb")
target_link_libraries(Guardian_of_the_grove glfw)