//Probando el N_Engine

//Para heredar los valores de los tres .h
#include "NewtonWorld.h"

int main() {

	float posX = 0, posY = 0, velX = 0, velY = 0, masa = 0; //Declaracion de variables para recopilar datos del usuario

	//Creando objeto w1
	World w1;

	//Creando objeto b1
	Body b1;
	//Dandole valor a la masa, posicion y velocidad
	b1.setMass(2.5f);
	b1.setPos(Vec2(0.0f, 0.0f));
	b1.setVel(Vec2(0.0f, 0.0f));

	w1.addBody(&b1);

	//Prueba con los valores puestos por mi persona
	cout << "Prueba realizada con valores puestos por mi persona" << endl; 

	for (int i = 0; i < 10; i++) {

		w1.Step(1.0f);

		b1.DisplayInfo();

	}

	system("pause"); 

	//Limpiar pantalla
	system("cls");

	//Creando objeto b2
	Body b2; 

	//Interactuando con el usuario
	cout << "Hola usuari@" << endl;
	cout << "Por favor ingrese una cantidad [en forma de vector, o sea (x,y)] para velocidad y posicion del objeto." << endl; 
	cout << "Empezaremos con la velocidad, escriba la velocidad en X." << endl;
	cin >> velX; 
	cout << "Ahora escriba su velocidad en Y." << endl; 
	cin >> velY; 
	cout << " " << endl; 
	cout << "El vector de velocidad (x,y) es (" << velX << "," << velY << ")" << endl << endl;
	cout << "Ahora sigamos con posicion, escriba su posicion en X." << endl;
	cin >> posX;
	cout << "Ahora escriba su posicion en Y." << endl;
	cin >> posY;
	cout << " " << endl;
	cout << "El vector de posicion (x,y) es (" << posX << "," << posY << ")" << endl << endl;
	cout << " " << endl;
	cout << "Ahora por ultimo escriba la masa del objeto" << endl;
	cin >> masa; 
	cout << " " << endl;

	//Utilizando los valores dados por el usuario
	b2.setMass(masa);
	b2.setPos(Vec2(posX, posY));
	b2.setVel(Vec2(velX, velY));

	w1.addBody(&b2);

	for (int i = 0; i < 10; i++) {

		w1.Step(1.0f);

		b2.DisplayInfo();

	}


}