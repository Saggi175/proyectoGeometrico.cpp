#ifndef OBJETOGEOMETRICO_H_
#define OBJETOGEOMETRICO_H_
#include<iostream>

class Objeto_Geometrico
{
	public:
		virtual float Area() = 0;
		virtual float Perimetro() = 0;
};

#endif
