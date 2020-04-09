#pragma once //Se utiliza para prevenir la sobreescritura

//Librerias
#include <iostream>
#include <math.h>
#include <vector>

using namespace std; //Para evitar usar std::cout y etc

struct Vec2 //Sus valores son predeterminadamente publicos
{
	//Constructores
	Vec2() : x(0.0f), y(0.0f) {}; //Valor predeterminado del constructor
	Vec2(float x, float y) : x(x), y(y) {};

	//Asignar valores al vector
	void Set(float x_, float y_);
	void setX(float x_);
	void setY(float y_);

	//Propiedades del vector
	float Length();
	float LengthSquared();
	void display();

	//Obtener componentes del vector
	float getX();
	float getY();

	//Operaciones con vectores
	void operator += (Vec2 v);
	void operator -= (Vec2 v);
	float Dot(Vec2 a, Vec2 b);
	float Cross(Vec2 a, Vec2 b);

private:

	float x, y;

};
