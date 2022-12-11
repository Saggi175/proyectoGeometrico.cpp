#ifndef CUADRADO_H_
#define CUADRADO_H_
#include<iostream>
#include"ObjetoGeometrico.h"

class Cuadrado : public Objeto_Geometrico
{
	private:
		int lado;
		float area;
		float perimetro;
	public:
		int getLado();
		float getArea();
		float getPerimetro();
		float Area();
		float Perimetro();
		
		Cuadrado(int);
		
		void setLado(int);
		void setArea(float);
		void setPerimetro(float);
		
		void mostrarArea();
		void mostrarPerimetro();
};

#endif
