#pragma once

#include "Application.h"
#include <glm/mat4x4.hpp>

class Shader;
class Mesh;


class _04_DirectLightingApp : public aie::Application {
public:

	_04_DirectLightingApp();
	virtual ~_04_DirectLightingApp();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

	void generateSphere(unsigned int segments, unsigned int rings, unsigned int& vao, unsigned int& vbo, unsigned int& ibo, unsigned int& indexCount);

protected:

	// camera transforms
	glm::mat4	m_viewMatrix;
	glm::mat4	m_projectionMatrix;

	unsigned int m_VAO;
	unsigned int m_VBO;
	unsigned int m_IBO;
	unsigned int m_IndexCount;

	Shader* shade;
	Mesh* mesh;
};