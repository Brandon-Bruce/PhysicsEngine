#ifndef DIYRIGIDBODY_H
#define DIYRIGIDBODY_H

#include "PhysicsObject.h"

#include <glm\vec3.hpp>

class DIYRigidBody : public PhysicsObject
{
public:
	DIYRigidBody();
	virtual void Update(glm::vec3, float timeStamp);
	virtual void Debug();
	void MakeGizmo();
	~DIYRigidBody();

private:
	glm::vec3 position;
	glm::vec3 velocity;

	float mass;
};

#endif