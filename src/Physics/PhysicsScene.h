#ifndef PHYSICSSCENE_H
#define PHYSICSSCENE_H

class PhysicsObject;

#include <vector>
#include <glm\vec3.hpp>

class PhysicsScene
{
public:
	PhysicsScene();
	void Update();
	void Render();
	~PhysicsScene();

	void AddActor(PhysicsObject* actor);
	void RemoveActor(PhysicsObject* actor);

private:
	glm::vec3 gravity;
	std::vector<PhysicsObject*> actors;
};

#endif