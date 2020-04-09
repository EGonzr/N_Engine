//Este .h hereda los valores de NewtonMath.h y NewtonBody.h

#include "NewtonBody.h"

struct World //Se encarga de hacer las iteraciones necesarias para la solucion
{

	//Constructores
	World() : gravity(Vec2(0.0f, 9.81f)) {}; //Valor predeterminado de la gravedad
	World(Vec2 gravity) : gravity(gravity) {};

	//Establecer gravedad
	void setGravity(Vec2 v);

	//Creacion del cuerpo
	void addBody(Body* b);

	//Proceso de simulacion 
	void Step(float dt);

private:

	Vec2 gravity;
	vector<Body*> bodies;

};

