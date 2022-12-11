#include"Cuadrado.h"
#include"ObjetoGeometrico.h"
#include<iostream>
#include<iomanip>

using namespace std;

int Cuadrado::getLado()
{
	return lado;
}

float Cuadrado::getArea()
{
	return area;
}

float Cuadrado::getPerimetro()
{
	return perimetro;
}

void Cuadrado::setLado(int lado)
{
	this->lado = lado;
}

void Cuadrado::setArea(float area)
{
	this->area = area;
}

void Cuadrado::setPerimetro(float perimetro)
{
	this->perimetro = perimetro;
}

Cuadrado::Cuadrado(int lado)
{
	setLado(lado);
}

float Cuadrado::Area()
{
	area = lado * lado;
	
	return area;
}

float Cuadrado::Perimetro()
{
	perimetro = lado * 4;
	
	return perimetro;
}

void Cuadrado::mostrarArea()
{
	cout << "El area del cuadrado es: " << fixed << setprecision(2) << area;
}

void Cuadrado::mostrarPerimetro()
{
	cout << "El perimetro del cuadrado es: " << fixed << setprecision( 2)<< perimetro;
}
