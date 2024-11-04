set(MESHLOADER_FILES 
    OBJParser.cpp
    ${CMAKE_SOURCE_DIR}/lib/glad.c    
)

add_library(MeshLoader ${MESHLOADER_FILES})