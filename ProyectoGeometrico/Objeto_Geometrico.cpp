#include <iostream>
#include"ObjetoGeometrico.h"
#include"Circulo.h"
#include"Triangulo.h"
#include"Cuadrado.h"
#include"Trapecio.h"
#include"Rectangulo.h"

using namespace std;

void area_circulo()
{
	int radio;
	
	cout << "Digite el radio del circulo: ";
	cin >> radio;
	
	Circulo C(radio);
	
	C.Area();
	
	C.mostrarArea();
	cout << endl;
}

void perimetro_circulo()
{
	int radio;
	
	cout << "Digite el radio del circulo: ";
	cin >> radio;
	
	Circulo C(radio);
	
	C.Perimetro();
	
	C.mostrarPerimetro();
	cout << endl;
}

void circulo()
{
	int eleccion;
	
	cout << "Digite que desea calcular del circulo: \n1-Area \n2-Perimetro" << endl;
	cin >> eleccion;
	
	system("cls");
	
	switch(eleccion)
	{
		case 1: 
			area_circulo();
			system("pause");
		break;
		case 2: 
			perimetro_circulo();
			system("pause");
		break;
	}
}

void area_triangulo()
{
	int base, altura;
	
	cout << "Digite la base del triangulo: ";
	cin >> base;
	cout << "Digite la altura del triangulo: ";
	cin >> altura;
	
	Triangulo t(base, altura);
	
	t.Area();
	
	t.mostrarArea();
	cout << endl;
}

void perimetro_triangulo()
{
	int lado_a, lado_b, lado_c;
	
	cout << "Digite la cantidad del lado 1 del triangulo: ";
	cin >> lado_a;
	cout << "Digite la cantidad del lado 2 del triangulo: ";
	cin >> lado_b;
	cout << "Digite la cantidad del lado 3 del triangulo: ";
	cin >> lado_c;
	
	Triangulo t(lado_a, lado_b, lado_c);
	
	t.Perimetro();
	
	t.mostrarPerimetro();
	cout << endl;
}

void triangulo()
{
	int eleccion;
	
	cout << "Digite que desea calcular del triangulo: \n1-Area \n2-Perimetro" << endl;
	cin >> eleccion;
	
	system("cls");
	
	switch(eleccion)
	{
		case 1: 
			area_triangulo();
			system("pause");
		break;
		case 2: 
			perimetro_triangulo();
			system("pause");
		break;
	}
}

void area_cuadrado()
{
	int lado;
	
	cout << "Digite la cantidad de un lado del cuadrado: ";
	cin >> lado;
	
	Cuadrado c(lado);
	
	c.Area();
	
	c.mostrarArea();
	cout << endl;
}

void perimetro_cuadrado()
{
	int lado;
	
	cout << "Digite la cantidad de un lado del cuadrado: ";
	cin >> lado;
	
	Cuadrado c(lado);
	
	c.Perimetro();
	
	c.mostrarPerimetro();
	cout << endl;
}

void cuadrado()
{
	int eleccion;
	
	cout << "Digite que desea calcular del cuadrado: \n1-Area \n2-Perimetro" << endl;
	cin >> eleccion;
	
	system("cls");
	
	switch(eleccion)
	{
		case 1: 
			area_cuadrado();
			system("pause");
		break;
		case 2: 
			perimetro_cuadrado();
			system("pause");
		break;
	}
}

void area_trapecio()
{
	int base1, base2, altura;
	
	cout << "Digite la cantidad de la base superior del trapecio: ";
	cin >> base1;
	cout << "Digite la cantidad de la base superior del trapecio: ";
	cin >> base2;
	cout << "Digite la altura del trapecio: ";
	cin >> altura;
	
	Trapecio tr(base1, base2, altura);
	
	tr.Area();
	
	tr.mostrarArea();
	cout << endl;
}

void perimetro_trapecio()
{
	int lado1, lado2, lado3, lado4;
	
	cout << "Digite la cantidad del lado 1 del trapecio: ";
	cin >> lado1;
	cout << "Digite la cantidad del lado 2 del trapecio: ";
	cin >> lado2;
	cout << "Digite la cantidad del lado 3 del trapecio: ";
	cin >> lado3;
	cout << "Digite la cantidad del lado 4 del trapecio: ";
	cin >> lado4;
	
	Trapecio tr(lado1, lado2, lado3, lado4);
	
	tr.Perimetro();
	
	tr.mostrarPerimetro();
	cout << endl;
}

void trapecio()
{
	int eleccion;
	
	cout << "Digite que desea calcular del trapecio: \n1-Area \n2-Perimetro"<<endl;
	cin >> eleccion;
	
	system("cls");
	
	switch(eleccion)
	{
		case 1: 
			area_trapecio();
			system("pause");
		break;
		case 2: 
			perimetro_trapecio();
			system("pause");
		break;
	}
}

void area_rectangulo()
{
	int base, altura;
	
	cout << "Digite la base del rectangulo: ";
	cin >> base;
	cout << "Digite la altura del rectangulo: ";
	cin >> altura;
	
	Rectangulo r(base, altura);
	
	r.Area();
	
	r.mostrarArea();
	cout << endl;
}

void perimetro_rectangulo()
{
	int base, altura;
	
	cout << "Digite la base del rectangulo: ";
	cin >> base;
	cout << "Digite la altura del rectangulo: ";
	cin >> altura;
	
	Rectangulo r(base, altura);
	
	r.Perimetro();
	
	r.mostrarPerimetro();
	cout << endl;
}

void rectangulo()
{
	int eleccion;
	
	cout << "Digite que desea calcular del rectangulo: \n1-Area \n2-Perimetro" << endl;
	cin >> eleccion;
	
	system("cls");
	
	switch(eleccion)
	{
		case 1: 
			area_rectangulo();
			system("pause");
		break;
		case 2: 
			perimetro_rectangulo();
			system("pause");
		break;
	}
}

int main(int argc, char** argv) 
{
	int eleccion;
	
	do
	{
		system("cls");
		cout << "Que desea calcular? \n1-Circulo \n2-Triangulo \n3-Cuadrado \n4-Trapecio \n5-Rectangulo \n6-Salir" << endl;
		cin >> eleccion;
		
		system("cls");
		
		switch(eleccion)
		{
			case 1: 
				circulo();
			break;
			case 2: 
				triangulo();
			break;
			case 3: 
				cuadrado();
			break;
			case 4: 
				trapecio();
			break;
			case 5: 
				rectangulo();
			break;
			case 6: break;
			default: 
				cout << "Opcion equivocada" << endl;
				system("pause");
		}
	}while(eleccion != 6);
	
	return 0;
}
