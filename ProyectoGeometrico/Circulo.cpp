#include<iostream>
#include"ObjetoGeometrico.h"
#include"Circulo.h"
#include<iomanip>
#define PI 3.1416

using namespace std;

float Circulo::getRadio()
{
	return radio;
}

float Circulo::getArea()
{
	return area;
}

float Circulo::getPerimetro()
{
	return perimetro;
}

void Circulo::setRadio(int radio)
{
	this->radio = radio;
}

void Circulo::setArea(float area)
{
	this->area = area;
}

void Circulo::setPerimetro(float perimetro)
{
	this->perimetro = perimetro;
}

Circulo::Circulo(int radio)
{
	setRadio(radio);
}

float Circulo::Area()
{
	area = PI * (radio * radio);
	
	return area;
}

float Circulo::Perimetro()
{
	perimetro = 2 * PI * radio;
	
	return perimetro;
}

void Circulo::mostrarArea(){
	cout << "El area del circulo es: " << fixed << setprecision(2) << area;
}

void Circulo::mostrarPerimetro(){
	cout << "El perimetro del circulo es: " << fixed << setprecision(2) << perimetro;
}
