//Este .h hereda los valores de NewtonMath.h

#include "NewtonMath.h"

struct Body
{
public:

	//Constructores
	Body() : mass(1.0f) {} //Valor predeterminado 
	Body(float mass) : mass(mass) {}

	//Establecer el valor de la masa
	void setMass(float m);

	//Establecer velocidad y posicion
	void setVel(Vec2 v);
	void setPos(Vec2 v);

	//Obtener los valores de masa, velocidad y posicion 
	float getMass();
	float getInvMass();
	Vec2 getVel();
	Vec2 getPos();

	//Mostrar información del cuerpo
	void DisplayInfo();

	//Aplicación de fuerzas
	void addForce(Vec2 f);
	Vec2 getForce(); 
	void addForceX(float k);
	void addForceY(float k);

private:

	float mass;
	float invMass = 1 / mass;
	Vec2 position;
	Vec2 velocity;
	Vec2 force;
};
