//Necesitamos heredar los valores de NewtonBody.h
#include "NewtonBody.h"

void Body::setMass(float m)
{
	mass = m; //Asignar valor a la masa
}

void Body::setVel(Vec2 v)
{
	velocity = v; //Asignar valor a la velocidad
}

void Body::setPos(Vec2 v)
{
	position = v; //Asignar valor a la posicion
}

float Body::getMass()
{
	return mass; //Devolver el valor de la masa
}

float Body::getInvMass()
{
	return invMass; //Devolver el valor de la masa invertida
}

Vec2 Body::getVel()
{
	return velocity; //Devolver el valor de la velocidad
}

Vec2 Body::getPos()
{
	return position; //Devolver el valor de la posicion
}

void Body::DisplayInfo()
{
	cout << "mass: " << mass << endl;
	cout << "position: ", position.display(); //Para mostrar en patalla la info
	cout << "velocity: ", velocity.display();
}

void Body::addForce(Vec2 f)
{

	force = f; //Lo utilizaremos para recoger el valor de la fuerza

}

Vec2 Body::getForce()
{
	return force; //Con este damos el valor de la fuerza
}

void Body::addForceX(float k)
{

	force.setX(k); //Para poner la fuerza en x

}

void Body::addForceY(float k)
{

	force.setY(k); //Para poner las fuerzas en y

}
