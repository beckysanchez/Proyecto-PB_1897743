#include <iostream> 
#include <stdio.h> 
#include <conio.h> 
#include <string> 
#include <string.h> 
#include <wchar.h>
#include <math.h> 
using namespace std; 

struct juego
{
	int nart;
	string desc;
	char gen[100];
	char nom[100];
	char clas[100];
	char con[100];
	float pre;
};
float precio(float x);

int main()
{
	juego datos[3];
	int opc;

	do
	{

	system("Color F5");

	printf("\t Menu de opciones \n");
	printf("Elija una de las siguientes opciones escribiendo el numero: \n");
	printf("1. Alta de un articulo \n");
	printf("2. Modificacion de un articulo\n");
	printf("3. Eliminacion de un articulo\n");
	printf("4. Lista de articulos\n");
	printf("5. Limpiar pantalla\n");
	printf("6. Salir \n");
	cin >> opc;


	switch (opc)
	{
	case 1:
		for (int i = 0; i < 3; i++)
		{
			printf("Ingrese los datos correspondientes \n");
			printf("Numero de articulo\n");
			scanf_s("%d", &datos[i].nart);
			printf("Nombre del articulo\n");
			cin.ignore();
			gets_s(datos[i].nom);
			printf("Descripcion del articulo\n");
			getline(cin, datos[i].desc);
			printf("Genero del articulo\n");
			gets_s(datos[i].gen);
			printf("Clasificacion del articulo\n");
			gets_s(datos[i].clas);
			printf("Consola\n");
			gets_s(datos[i].con);
			printf("Precio unitario del articulo\n");
			scanf_s("%f", &datos[i].pre);
		}

		break;

	case 2:
		cout << "Esta funcion no esta disponible" << endl;
		break;

	case 3:
		cout << "Esta funcion no esta disponible" << endl;
		break;

	case 4:
		for (int i = 0; i < 3; i++)
		{
			printf("Numero de articulo: %d \n", datos[i].nart);
			printf("Nombre del articulo: %s \n", datos[i].nom);
			printf("Descripcion del articulo: %s \n", datos[i].desc.c_str());
			printf("Genero del articulo: %s \n", datos[i].gen);
			printf("Clasificacion del articulo: %s \n", datos[i].clas);
			printf("Consola: %s \n", datos[i].con);
			printf("Precio unitario del articulo: %f \n", datos[i].pre);
			printf("el precio total es de %f \n", precio(datos[i].pre));
		}
		break;

	case 5:
		system("cls");
		break;

	case 6:
		exit(1);
		break;

	default:
		cout << "Opcion invalida" << endl << "Intente de nuevo" << endl;
		break;
	}
	}while (opc != 6);


}

float precio(float x)
{
	float tot;

	tot = (x * 0.16) + x;
	return tot;
}