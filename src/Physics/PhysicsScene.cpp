#include "PhysicsScene.h"
#include "PhysicsObject.h"

PhysicsScene::PhysicsScene(glm::vec3 gravity)
{

}

void PhysicsScene::Update()
{
	for (unsigned int i = 0; i < actors.size(); ++i)
		actors[i]->Update(gravity, deltaTime);
}

void PhysicsScene::DebugScene()
{
}

void PhysicsScene::AddGizmos()
{
	for (unsigned int i = 0; i < actors.size(); ++i)
		actors[i]->MakeGizmos();
}

PhysicsScene::~PhysicsScene()
{
	// clean up actors
	for (int i = 0; i < actors.size(); ++i)
		delete actors[i];
	actors.clear();
}

void PhysicsScene::AddActor(PhysicsObject* actor)
{
	// add actor to back of vector
	actors.push_back(actor);
}

void PhysicsScene::RemoveActor(PhysicsObject* actor)
{
	// find actor to remove and remove ("erase") it
	std::vector<PhysicsObject*>::iterator toRemove =
		std::find(actors.begin(), actors.end(), actor);
	actors.erase(toRemove);
}
