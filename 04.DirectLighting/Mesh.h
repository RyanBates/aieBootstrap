#pragma once
#include <vector>
#include <glm\glm.hpp>
using namespace glm;

struct Vertex {
	vec4 Position;
	vec4 Color;
};


struct Vertex1 {
	vec4 position;
	vec4 Color;
	vec4 normal;
	vec4 tangent;
	vec4 bitangent;
	vec2 texcoord;
};

class Mesh
{
public:
	Mesh();
	~Mesh();

	void initialize(std::vector<Vertex>&verts, std::vector<unsigned int>&indices);
	void create_buffers();

	void bind();
	void unbind();
	unsigned int m_index_count;
	unsigned int m_vertex_count;

	unsigned int m_VAO;
	unsigned int m_VBO;
	unsigned int m_IBO;

protected:
	std::vector<unsigned int>m_indices;
	std::vector<Vertex> m_vertices;


};