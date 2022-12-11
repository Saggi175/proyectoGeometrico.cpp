#ifndef TRIANGULO_H_
#define TRIANGULO_H_
#include<iostream>
#include "ObjetoGeometrico.h"

class Triangulo : public Objeto_Geometrico
{
	private:
		int base;
		int altura;
		int lado_a;
		int lado_b;
		int lado_c;
		float area; 
		float perimetro;
	public:
		int getBase();
		int getAltura();
		int getLado_A();
		int getLado_B();
		int getLado_C();
		float getArea();
		float getPerimetro();
		float Area();
		float Perimetro();
		
		Triangulo(int, int);
		Triangulo(int, int, int);
		
		void setBase(int);
		void setAltura(int);
		void setLado_A(int);
		void setLado_B(int);
		void setLado_C(int);
		void setArea(float);
		void setPerimetro(float);
		
		void mostrarArea();
		void mostrarPerimetro();
};

#endif
