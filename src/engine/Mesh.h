#ifndef MESH_H
#define MESH_H

#include <string>
#include <vector>
#include "VAO.h"
#include "EBO.h"
#include "Camera.h"
#include "texture.h"
#include <glad/glad.h>
#include "Model.h"

class Mesh {
public:
	std::vector <Vertex> vertices;
	std::vector <GLuint> indices;
	std::vector <Texture> textures;
	// Store VAO in public so it can be used in the Draw function
	VAO VAO1;

	// Initializes the mesh
	Mesh(std::vector <Vertex>& vertices, std::vector <GLuint>& indices, std::vector <Texture>& textures);

	Mesh(const char* path);

	// Draws the mesh
	void Draw(Shader& shader, Camera& camera);
};
#endif