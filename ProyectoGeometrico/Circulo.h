#ifndef CIRCULO_H_
#define CIRCULO_H_
#include "ObjetoGeometrico.h"
#include<iostream>

class Circulo : public Objeto_Geometrico
{
	private:
		int radio;
		float area;
		float perimetro;
	public:
		float getArea();
		float getPerimetro();
		float getRadio();
		float Area();
		float Perimetro();
		Circulo(int);
		
		void setRadio(int);
		void setArea(float);
		void setPerimetro(float);
		
		void mostrarArea();
		void mostrarPerimetro();
};

#endif
