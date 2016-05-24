#include "Plane.h"

Plane::Plane(glm::vec4 colour, glm::vec2 normal, float distance) :
	PhysicsObject(ShapeType::PLANE, colour),
	normal(normal), distance(distance), camera(camera)
{

}

void Plane::Update(glm::vec3, float deltaTime)
{

}

void Plane::Debug()
{

}

void Plane::MakeGizmo()
{
	
}

Plane::~Plane()
{

}
