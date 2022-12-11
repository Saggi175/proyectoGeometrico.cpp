#ifndef TRAPECIO_H_
#define TRAPECIO_H_
#include"ObjetoGeometrico.h"
#include<iostream>

class Trapecio : public Objeto_Geometrico
{
	private:
		int base1;
		int base2;
		int altura;
		int lado1;
		int lado2;
		int lado3;
		int lado4;
		float area;
		float perimetro;
	public:
		int getBase1();
		int getBase2();
		int getAltura();
		int getLado1();
		int getLado2();
		int getLado3();
		int getLado4();
		float getArea();
		float getPerimetro();
		float Area();
		float Perimetro();
		
		Trapecio(int, int, int);
		Trapecio(int, int, int, int);
		
		void setBase1(int);
		void setBase2(int);
		void setAltura(int);
		void setLado1(int);
		void setLado2(int);
		void setLado3(int);
		void setLado4(int);
		void setArea(float);
		void setPerimetro(float);
		
		void mostrarArea();
		void mostrarPerimetro();
};

#endif
