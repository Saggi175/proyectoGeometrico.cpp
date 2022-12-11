#ifndef RECTANGULO_H_
#define RECTANGULO_H_
#include<iostream>
#include"ObjetoGeometrico.h"

class Rectangulo : public Objeto_Geometrico
{
	private:
		int base;
		int altura;
		float area;
		float perimetro;
	public:
		int getBase();
		int getAltura();
		float getArea();
		float getPerimetro();
		float Area();
		float Perimetro();
		
		Rectangulo(int, int);
		
		void setBase(int);
		void setAltura(int);
		void setArea(float);
		void setPerimetro(float);
		
		void mostrarArea();
		void mostrarPerimetro();
};

#endif
