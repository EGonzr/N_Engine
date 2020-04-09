#include "NewtonWorld.h"

void World::setGravity(Vec2 v)
{
	gravity = v; //Para agregar el valor de la gravedad
}

void World::addBody(Body* b)
{
	bodies.push_back(b); //Va agregando elementos al vector bodies

}

void World::Step(float dt) //Parte importante
{

	if ((int)bodies.size() == 0) { cout << "No hay nada en este world." << endl; system("pause"); }

	float ax = gravity.getX(); //Por ahora, la única aceleración que existe es debido a la gravedad
	float ay = gravity.getY();

	for(int i = 0; i < (int)bodies.size(); i++) //Integrador de fuerza
	{

		float ax = gravity.getX() + bodies[i]->getInvMass() * bodies[i]->getForce().getX();
		float ay = gravity.getY() + bodies[i]->getInvMass() * bodies[i]->getForce().getY();

	}

	for (int i = 0; i < (int)bodies.size(); i++) //Integrador de velocidad
	{
		float sx = bodies[i]->getPos().getX(); //Posición en x del cuerpo en bodies[i]
		float sy = bodies[i]->getPos().getY(); //Posición en y del cuerpo en bodies[i]

		float vx = bodies[i]->getVel().getX(); //Velocidad en x del cuerpo en bodies[i]
		float vy = bodies[i]->getVel().getY(); //Velocidad en y del cuerpo en bodies[i]

		bodies[i]->setPos(Vec2(sx + vx * dt, sy + vy * dt)); //Modificando la posición del cuerpo usando la aproximación de Euler
		bodies[i]->setVel(Vec2(ax * dt + vx, ay * dt + vy)); //Modificando la velocidad del cuerpo usando la aproximación de Euler

		bodies[i]->addForce(Vec2(0.0f, 0.0f));

	}


}