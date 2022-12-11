#include"Rectangulo.h"
#include<iostream>
#include<iomanip>

using namespace std;

int Rectangulo::getBase()
{
	return base;
}

int Rectangulo::getAltura()
{
	return altura;
}

float Rectangulo::getArea()
{
	return area;
}

float Rectangulo::getPerimetro()
{
	return perimetro;
}

void Rectangulo::setBase(int base)
{
	this->base = base;
}

void Rectangulo::setAltura(int altura)
{
	this->altura = altura;
}

void Rectangulo::setArea(float area)
{
	this->area = area;
}

void Rectangulo::setPerimetro(float perimetro)
{
	this->perimetro = perimetro;
}

Rectangulo::Rectangulo(int base, int altura)
{
	setBase(base);
	setAltura(altura);
}

float Rectangulo::Area()
{
	area = base * altura;
	
	return area;
}

float Rectangulo::Perimetro()
{
	perimetro = (2 * base) + (2 * altura);
	
	return perimetro;
}

void Rectangulo::mostrarArea()
{
	cout << "El area del rectangulo es: " << fixed << setprecision(2) << area;
}

void Rectangulo::mostrarPerimetro()
{
	cout << "El perimetro del rectangulo es: " << fixed << setprecision(2) << perimetro;
}
