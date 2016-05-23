#include "PhysicsScene.h"
#include "PhysicsObject.h"

PhysicsScene::PhysicsScene()
{

}

void PhysicsScene::Update()
{
	for (unsigned int i = 0; i < actors.size(); ++i)
		actors[i]
}

void PhysicsScene::Render()
{

}

PhysicsScene::~PhysicsScene()
{

}

void PhysicsScene::AddActor(PhysicsObject* actor)
{
	actors.push_back(actor);
}

void PhysicsScene::RemoveActor(PhysicsObject* actor)
{
	std::vector<PhysicsObject*>::iterator toRemove = std::find(actors.begin(), actors.end(), actor);
	actors.erase(toRemove);
}
