#include"Trapecio.h"
#include"ObjetoGeometrico.h"
#include<iostream>
#include<iomanip>

using namespace std;

int Trapecio::getBase1()
{
	return base1;
}

int Trapecio::getBase2()
{
	return base2;
}

int Trapecio::getAltura()
{
	return altura;
}

int Trapecio::getLado1()
{
	return lado1;
}

int Trapecio::getLado2()
{
	return lado2;
}

int Trapecio::getLado3()
{
	return lado3;
}

int Trapecio::getLado4()
{
	return lado4;
}

float Trapecio::getArea()
{
	return area;
}

float Trapecio::getPerimetro()
{
	return perimetro;
}

void Trapecio::setBase1(int base1)
{
	this->base1 = base1;
}

void Trapecio::setBase2(int base2)
{
	this->base2 = base2;
}

void Trapecio::setAltura(int altura)
{
	this->altura = altura;
}

void Trapecio::setLado1(int lado1)
{
	this->lado1 = lado1;
}

void Trapecio::setLado2(int lado2)
{
	this->lado2 = lado2;
}

void Trapecio::setLado3(int lado3)
{
	this->lado3 = lado3;
}

void Trapecio::setLado4(int lado4)
{
	this->lado4 = lado4;
}

void Trapecio::setArea(float area)
{
	this->area = area;
}

void Trapecio::setPerimetro(float perimetro)
{
	this->perimetro = perimetro;
}

Trapecio::Trapecio(int base1, int base2, int altura)
{
	setBase1(base1);
	setBase2(base2);
	setAltura(altura);
}

Trapecio::Trapecio(int lado1, int lado2, int lado3, int lado4)
{
	setLado1(lado1);
	setLado2(lado2);
	setLado3(lado3);
	setLado4(lado4);
}

float Trapecio::Area()
{
	area = ((base1 + base2) * altura) / 2; 

	return area;
}

float Trapecio::Perimetro()
{
	perimetro = lado1 + lado2 + lado3 + lado4;
	
	return perimetro;
}

void Trapecio::mostrarArea()
{
	cout << "El area del trapecio es: " << fixed << setprecision(2) << area;
}

void Trapecio::mostrarPerimetro()
{
	cout << "El perimetro del trapecio es: " << fixed << setprecision(2) << perimetro;
}
