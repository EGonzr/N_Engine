#include "NewtonMath.h"

void Vec2::Set(float x_, float y_) {

	x = x_;  
	y = y_;  //Valores del vector

}

void Vec2::setX(float x_)
{

	x = x_; //Poner el valor de x

}

void Vec2::setY(float y_)
{

	y = y_; //Poner el valor de y

}

float Vec2::Length()
{
	return sqrt(x * x + y * y); 
}

float Vec2::LengthSquared()
{
	return x * x + y * y;
}

void Vec2::display()
{

	cout << "El vector es (" << x << ", " << y << ")" << endl;  //Mostrar el vector

}

float Vec2::getX()
{
	return x;  //Devolver valor en x
}

float Vec2::getY()
{
	return y; //Devolver valor en y
}

void Vec2::operator+=(Vec2 v)
{
	x += v.x;
	y += v.y;  //Suma

}

void Vec2::operator-=(Vec2 v)
{
	x -= v.x;
	y -= v.y; //Resta

}

float Vec2::Dot(Vec2 a, Vec2 b)
{
	return a.x * b.x + a.y * b.y; //Multiplicacion de punto

}

float Vec2::Cross(Vec2 a, Vec2 b)
{
	return a.x * b.y - a.y * b.x; //Multiplicacion cruz

}