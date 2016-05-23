#ifndef PHYSICSOBJECT_H
#define PHYSICSOBJECT_H

#include <glm\vec3.hpp>

enum ShapeType
{
	PLANE = 0,
	SPHERE = 1,
	BOX = 2,
};

class PhysicsObject
{
public:
	PhysicsObject();
	virtual void Update(glm::vec3 gravity, float timeStep) = 0;
	virtual void Debug() = 0;
	virtual void MakeGizmos() = 0;
	virtual void ResetPosition() {};
	~PhysicsObject();

private:
	ShapeType shapeID;

};

#endif