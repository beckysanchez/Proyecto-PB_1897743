#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <math.h>
using namespace std;

struct juego
{
	int nart;
	string desc;
	string ests;
	string carac;
	int fecha;
	char gen[100];
	char nom[100];
	char clas[100];
	char con[100];
	float pre;
};
int cant;

juego* Producto;
float precio(float x);
float iva(float x);
void alta();
void modificar();
void eliminar();
void lista();
void salir();


int main()
{
	int opc;
	system("Color F5");

	printf("   %c %c %c %c %c VIDEOJUEGOS %c %c %c %c %c\t \n", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178);

	printf("\t Menu de opciones \n");
	printf("Elija una de las siguientes opciones escribiendo el numero: \n");
	printf("1. Alta de un articulo \n");
	printf("2. Modificacion de un articulo\n");
	printf("3. Eliminacion de un articulo\n");
	printf("4. Lista de articulos\n");
	printf("5. Limpiar pantalla\n");
	printf("6. Salir \n");
	scanf_s("%d", &opc);


	switch (opc)
	{
	case 1:
		alta();
		return main();
		break;

	case 2:
		modificar();
		return main();
		break;

	case 3:
		eliminar();
		return main();
		break;

	case 4:
		lista();
		return main();
		break;

	case 5:
		system("cls");
		return main();
		break;

	case 6:
		salir();
		return main();
		break;

	default:
		cout << "Opcion invalida" << endl << "Intente de nuevo" << endl;
		return main();
		break;
	}

}
//validaciones
void alta()
{
	printf("\t %c %c %c |REGISTRO| %c %c %c \t \n", 178, 178, 178, 178, 178, 178);
	printf("Cantidad de registros a ingresar: \n");
	scanf_s("%d", &cant);
	Producto = new juego[cant];
	for (int i = 0; i < cant; i++)
	{
		int rep =0;
		printf("Ingrese los datos correspondientes \n");

		do
		{
			
			printf(">Numero de articulo\n");
			scanf_s("%d", &Producto[i].nart);
			cin.ignore();
			for (int j = 0; j < i; j++)
			{
				if (Producto[i].nart == Producto[j].nart)
				{
					rep = 1;
					printf("El numero esta en uso \n");
				}
				else
				{
					rep = 2;
				}
			}
			
		} while (rep==1);

			printf(">Nombre del articulo\n");
			gets_s(Producto[i].nom);
			printf(">Descripcion del articulo\n");
			getline(cin, Producto[i].desc);
			printf(">Genero del articulo\n");
			gets_s(Producto[i].gen);
			printf(">Caracteristicas del articulo\n");
			getline(cin, Producto[i].carac);
			printf(">Clasificacion del articulo\n");
			gets_s(Producto[i].clas);
			printf(">Consola\n");
			gets_s(Producto[i].con);

			int val;

			do
			{
				printf(">A%co de lanzamiento \n", 164);
				scanf_s("%d", &Producto[i].fecha);

				if ((Producto[i].fecha < 1969) || (Producto[i].fecha>2023))
				{
					printf("El a%co ingresado es incorrecto \n", 164);
					printf("Intente de nuevo \n");
					val = 1;
				}
				else
				{
					val = 2;
				}

			} while (val==1);
			
			printf(">Precio unitario del articulo\n");
			scanf_s("%f", &Producto[i].pre);
		
	}
}

void modificar()
{
	printf("\t %c %c %c |MODIFICAR| %c %c %c \t \n", 178, 178, 178, 178, 178, 178);
	int op2, op, j, loop = 0;

	do
	{


		do
		{
			printf("ingrese el numero del articulo a modificar \n");
			scanf_s("%d", &j);
			j = j - 1;

			for (int i = j; i == j; i++)
			{
				if ((Producto[i].pre == 0))
				{
					printf("PRODUCTO ELIMINADO %d \n", i + 1);
					printf("Ingrese un registro \n");
					op2 = 1;
				}
				else
				{
					op2 = 2;
				}
			}
		} while (op2 == 1);

		printf("Ingrese el dato a modificar \n");
		printf("1.  Nombre\n");
		printf("2.  Descripcion \n");
		printf("3.  Genero \n");
		printf("4.  Clasificacion \n");
		printf("5.  Consola \n");
		printf("6.  Precio \n");
		printf("7.  Caracteristicas \n");
		printf("8.  A%co de lanzamiento \n", 164);
		scanf_s("%d", &op);

		switch (op)
		{
		case 1:
			for (int i = j; i == j; i++)
			{
				printf("El nombre actual es %s \n", Producto[i].nom);
				cin.ignore();
				printf("Ingrese el nuevo nombre \n");
				gets_s(Producto[i].nom);
			}
			break;

		case 2:
			for (int i = j; i == j; i++)
			{
				printf("La descripcion actual es %s \n", Producto[i].desc.c_str());
				cin.ignore();
				printf("Ingrese la nueva descripcion \n");
				getline(cin, Producto[i].desc);
			}
			break;

		case 3:
			for (int i = j; i == j; i++)
			{
				printf("El genero actual es %s \n", Producto[i].gen);
				cin.ignore();
				printf("Ingrese el nuevo genero \n");
				gets_s(Producto[i].gen);
			}
			break;

		case 4:
			for (int i = j; i == j; i++)
			{
				printf("La clasificacion actual es %s \n", Producto[i].clas);
				cin.ignore();
				printf("Ingrese la nueva clasificacion \n");
				gets_s(Producto[i].clas);
			}
			break;

		case 5:
			for (int i = j; i == j; i++)
			{
				printf("La consola actual es %s \n", Producto[i].con);
				cin.ignore();
				printf("Ingrese la nueva consola \n");
				gets_s(Producto[i].con);
			}
			break;

		case 6:
			for (int i = j; i == j; i++)
			{
				printf("El precio unitario actual es %f \n", Producto[i].pre);
				cin.ignore();
				printf("Ingrese el nuevo precio unitario \n");
				scanf_s("%f", &Producto[i].pre);
			}
			break;

		case 7:
			for (int i = j; i == j; i++)
			{
				printf("Las Caracteristicas actuales son %s \n", Producto[i].carac.c_str());
				cin.ignore();
				printf("Ingrese las nuevas caracteristicas \n");
				getline(cin, Producto[i].carac);
			}
			break;

		case 8:
			for (int i = j; i == j; i++)
			{
				
				int val;
				cin.ignore();
				do
				{
					printf("El a%o de lanzamiento actual es %d \n", 164, Producto[i].fecha);
					printf("Ingrese el nuevo a%co \n", 164);
					scanf_s("%d", &Producto[i].fecha); //copia y pega la validacion de año

					if ((Producto[i].fecha < 1969) || (Producto[i].fecha > 2023))
					{
						printf("El a%co ingresado es incorrecto \n", 164);
						printf("Intente de nuevo \n");
						val = 1;
					}
					else
					{
						val = 2;
					}

				} while (val == 1);

			}
			break;

		default:
			printf("opcion invalida \n");
			break;

		}

		printf("¿Desea modificar otro articulo? \n");
		printf("1. Si \n");
		printf("2. No \n");
		scanf_s("%d", &loop);

	} while (loop == 1);
}

void eliminar()
{
	printf("\t %c %c %c |ELIMINAR| %c %c %c \t \n", 178, 178, 178, 178, 178, 178);
	int j, loop = 0;
	int i;

	do
	{
		printf("Ingrese el producto a eliminar \n");
		scanf_s("%d", &j);
		i = j - 1;

		printf("Eliminando producto %d ... \n", j);
		Producto[i].pre = 0;


		printf("¿Desea eliminar otro producto? \n");
		printf("1. Si \n");
		printf("2. No \n");
		scanf_s("%d", &loop);
	} while (loop == 1);


}

void lista()
{
	int des;
	string clave;
	printf("\t %c %c %c |LISTA DE ARTICULOS| %c %c %c \t \n", 178, 178, 178, 178, 178, 178);
	
    printf("Desea filtrar por: \n");
	printf("1. Consola  \n");
	printf("2. Genero \n");
	printf("3. Categoria \n");
	scanf_s("%d", &des);
	cin.ignore();
	printf("buscar por: \n");
	getline(cin, clave);

	switch (des)
	{
	case 1:
		for (int i = 0; i < cant; i++)
		{

			if (Producto[i].con == clave)
			{
				if (Producto[i].pre == 0)
				{
					printf("PRODUCTO ELIMINADO %d \n", i);
					printf("\n");
				}
				else
				{
					printf("Numero de articulo: %d \n", Producto[i].nart);
					printf("Nombre del articulo: %s \n", Producto[i].nom);
					printf("Descripcion del articulo: %s \n", Producto[i].desc.c_str());
					printf("Genero del articulo: %s \n", Producto[i].gen);
					printf("Caracteristicas del articulo: %s \n", Producto[i].carac.c_str());
					printf("Clasificacion del articulo: %s \n", Producto[i].clas);
					printf("Consola: %s \n", Producto[i].con);
					printf("A%co de lanzamiento: %d \n",164,  Producto[i].nart);
					printf("Precio unitario del articulo: %f \n", Producto[i].pre);
					printf("el iva aplicado es de %f \n", iva(Producto[i].pre));
					printf("el precio total es de %f \n", precio(Producto[i].pre));
					printf("\n");
				}
			}
			

		}
		break;

	case 2:
		for (int i = 0; i < cant; i++)
		{

			if (Producto[i].gen == clave)
			{
				if (Producto[i].pre == 0)
				{
					printf("PRODUCTO ELIMINADO %d \n", i + 1);
					printf("\n");
				}
				else
				{
					printf("Numero de articulo: %d \n", Producto[i].nart);
					printf("Nombre del articulo: %s \n", Producto[i].nom);
					printf("Descripcion del articulo: %s \n", Producto[i].desc.c_str());
					printf("Genero del articulo: %s \n", Producto[i].gen);
					printf("Caracteristicas del articulo: %s \n", Producto[i].carac.c_str());
					printf("Clasificacion del articulo: %s \n", Producto[i].clas);
					printf("Consola: %s \n", Producto[i].con);
					printf("A%co de lanzamiento: %d \n", 164, Producto[i].nart);
					printf("Precio unitario del articulo: %f \n", Producto[i].pre);
					printf("el iva aplicado es de %f \n", iva(Producto[i].pre));
					printf("el precio total es de %f \n", precio(Producto[i].pre));
					printf("\n");
				}
			}
		
		}
		break;

	case 3:
		for (int i = 0; i < cant; i++)
		{
			if (Producto[i].clas == clave)
			{
				if (Producto[i].pre == 0)
				{
					printf("PRODUCTO ELIMINADO %d \n", i + 1);
					printf("\n");
				}
				else
				{
					printf("Numero de articulo: %d \n", Producto[i].nart);
					printf("Nombre del articulo: %s \n", Producto[i].nom);
					printf("Descripcion del articulo: %s \n", Producto[i].desc.c_str());
					printf("Genero del articulo: %s \n", Producto[i].gen);
					printf("Caracteristicas del articulo: %s \n", Producto[i].carac.c_str());
					printf("Clasificacion del articulo: %s \n", Producto[i].clas);
					printf("Consola: %s \n", Producto[i].con);
					printf("A%co de lanzamiento: %d \n", 164, Producto[i].nart);
					printf("Precio unitario del articulo: %f \n", Producto[i].pre);
					printf("el iva aplicado es de %f \n", iva(Producto[i].pre));
					printf("el precio total es de %f \n", precio(Producto[i].pre));
					printf("\n");
				}
			}
			
		}
		break;

	   default:
		printf("Usted no ha elegido un filtro \n");
		for (int i = 0; i < cant; i++)
		{

			if (Producto[i].pre == 0)
			{
				printf("PRODUCTO ELIMINADO %d \n", i + 1);
				printf("\n");
			}
			else
			{
				printf("Numero de articulo: %d \n", Producto[i].nart);
				printf("Nombre del articulo: %s \n", Producto[i].nom);
				printf("Descripcion del articulo: %s \n", Producto[i].desc.c_str());
				printf("Genero del articulo: %s \n", Producto[i].gen);
				printf("Caracteristicas del articulo: %s \n", Producto[i].carac.c_str());
				printf("Clasificacion del articulo: %s \n", Producto[i].clas);
				printf("Consola: %s \n", Producto[i].con);
				printf("A%co de lanzamiento: %d \n", 164, Producto[i].nart);
				printf("Precio unitario del articulo: %f \n", Producto[i].pre);
				printf("el iva aplicado es de %f \n", iva(Producto[i].pre));
				printf("el precio total es de %f \n", precio(Producto[i].pre));
				printf("\n");
			}
		}
		break;
	}

}

void salir()
{
	ofstream archivo;
	string Listadeproductos;
	string txt;
	float txt2;
	int txt3;

	Listadeproductos = "videojuego.txt";
	archivo.open(Listadeproductos.c_str(), ios::out);

	if (archivo.fail())
	{
		printf("ERROR \n");
		printf("El archivo no se´puede crear \n");
		exit(1);
	}
	//para hacerlo modo tabla
	archivo << "ARTICULO" << "\t";
	archivo << "NOMBRE" << "\t";
	archivo << "DESCRIPCION" << "\t" << "\t";
	archivo << "GENERO" << "\t";
	archivo << "CARACT" << "\t" << "\t";
	archivo << "CLAS." << "\t" << "\t";
	archivo << "CONSOLA" << "\t";
	archivo << "A%CO"<< 164 << "\t"; //checa si lo acepta
	archivo << "P. UNITARIO" << "\t";
	archivo << "IVA" << "\t";
	archivo << "P. TOTAL" << "\n";


	for (int i = 0; i < cant; i++)
	{
		if (Producto[i].pre == 0)
		{
			txt3 = Producto[i].nart;
			archivo << txt3 << "\t" << "\t";
			txt = "PRODUCTO ELIMINADO";
			txt3 = i;
			archivo << txt << txt3 << "\n";
		}
		else
		{
			txt3 = Producto[i].nart;
			archivo << txt3 << "\t" << "\t";
			txt = Producto[i].nom;
			archivo << txt << "\t" << "\t";
			txt = Producto[i].desc;
			archivo << txt << "\t " << "\t";
			txt = Producto[i].gen;
			archivo << txt << "\t " << "\t";
			txt = Producto[i].carac;
			archivo << txt << "\t " << "\t";
			txt = Producto[i].clas;
			archivo << txt << "\t " << "\t";
			txt = Producto[i].con;
			archivo << txt << "\t " << "\t";
			txt3 = Producto[i].fecha;
			archivo << txt3 << "\t " << "\t";
			txt2 = Producto[i].pre;
			archivo << txt2 << "\t" << "\t";
			Producto[i].pre = iva(Producto[i].pre);
			txt2 = Producto[i].pre;
			archivo<<txt2<< "\t" << "\t";
			Producto[i].pre = precio(Producto[i].pre);
			txt2 = Producto[i].pre;
			archivo << txt2 << "\n";

		}
	}

	archivo.close();
	exit(1);
}

float precio(float x)
{
	float tot;

	tot = (x * 0.16) + x;
	return tot;
}

float iva(float x)
{
	float tot;
	tot = x * .16;
	return tot;
}