#ifndef PHYSICSSCENE_H
#define PHYSICSSCENE_H

class PhysicsObject;

#include <vector>
#include <glm\vec2.hpp>

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
	glm::vec2 gravity;
	std::vector<PhysicsObject*> actors;
};

#endif