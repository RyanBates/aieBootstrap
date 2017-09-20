#version 410

uniform vec3 direction;
uniform vec3 Id;
uniform vec3 Ia;
uniform vec3 Is;

uniform vec3 Ka;
uniform vec3 Kd;
uniform vec3 Ks;
uniform float a;


in vec4 vNormal;
in vec4 vPosition;
in vec4 vColor;
in vec4 vUV;
in vec4 vTangent;

out vec4 FragColor;

void main() 
{ 
	
	FragColor = vNormal;
}