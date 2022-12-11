#include"Triangulo.h"
#include<iostream>
#include<iomanip>

using namespace std;

int Triangulo::getBase()
{
	return base;
}

int Triangulo::getAltura()
{
	return altura;
}

int Triangulo::getLado_A()
{
	return lado_a;
}

int Triangulo::getLado_B()
{
	return lado_b;
}

int Triangulo::getLado_C()
{
	return lado_c;
}

float Triangulo::getArea()
{
	return area;
}

float Triangulo::getPerimetro()
{
	return perimetro;
}

void Triangulo::setBase(int base)
{
	this->base = base;
}

void Triangulo::setAltura(int altura)
{
	this->altura = altura;
}

void Triangulo::setLado_A(int lado_a)
{
	this->lado_a = lado_a;
}

void Triangulo::setLado_B(int lado_b)
{
	this->lado_b = lado_b;
}

void Triangulo::setLado_C(int lado_c)
{
	this->lado_b = lado_c;
}

void Triangulo::setArea(float area)
{
	this->area = area;
}

void Triangulo::setPerimetro(float perimetro)
{
	this->perimetro = perimetro;
}

Triangulo::Triangulo(int lado_a, int lado_b, int lado_c)
{
	setLado_A(lado_a);
	setLado_B(lado_b);
	setLado_C(lado_c);
}

Triangulo::Triangulo(int base, int altura)
{
	setBase(base);
	setAltura(altura);
}

float Triangulo::Area()
{
	area = (base * altura) / 2;
	
	return area;
}

float Triangulo::Perimetro()
{
	perimetro = lado_a + lado_b + lado_c;
	
	return perimetro;
}

void Triangulo::mostrarArea(){
	cout << "El area del triangulo es: " << fixed << setprecision(2) << area;
}

void Triangulo::mostrarPerimetro(){
	cout << "El perimetro del triangulo es: " << fixed << setprecision(2) << perimetro;
}
