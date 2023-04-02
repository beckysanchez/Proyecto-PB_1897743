#include <iostream> <stdio.h>  //bibliotecas utilizadas para el proyecto, biblioteca estanda y de matematicas
using namespace std; //espacio de trabajo
int main() //funcion utilizada
{
	//variables para el proyecto: Int para numeros eneteros, Char para caracteres y el numero permitido, Float para numeros reales.

	int opc, nart, a;
	char desc[100];
	char gen[20];
	char nom[20];
	char clas[10];
	char con[20];
	float pre, tot;

	//para cambiar el color del programa

	system("Color F5");

	//menu de opciones para el usuario

	cout << "\n\t Menu de opciones" << endl;
	cout << "Elija una de las siguientes opciones escribiendo el numero: " << endl;
	cout << "1. Alta de un articulo" << endl;
	cout << "2. Modificacion de un articulo" << endl;
	cout << "3. Eliminacion de un articulo" << endl;
	cout << "4. Lista de articulos" << endl;
	cout << "5. Limpiar pantalla" << endl;
	cout << "6. Salir" << endl;
	cin >> opc;

	//se lee la opcion del usuario y se abre switch para cada caso


	switch (opc)
	{
	case 1:

		//pido los datos del objeto, debo agregar validaciones
		cout << "Ingrese los datos correspondientes" << endl;
		cout << "Numero de articulo" << endl;
		cin >> nart;
		cout << "Nombre del articulo" << endl;
		cin >> nom;
		cout << "Descripcion del articulo" << endl;
		cin >> desc;
		cout << "Genero del articulo" << endl;
		cin >> gen;
		cout << "Clasificacion del articulo" << endl;
		cin >> clas;
		cout << "Consola" << endl;
		cin >> con;
		cout << "Precio unitario del articulo" << endl;
		cin >> pre;
		cout << "el precio total es de" << endl;

		//por mientras imprimo el precio total para verificar que el procedimiento sea correcto

		tot = (pre * .16) + pre;
		cout << tot << endl;

		//en un futuro agrego una funcion para que regrese a la primera pregunta y no al menu
		cout << "Para agregar otro articulo presione 1" << endl;
		cin >> a;

		if (a == 1)
		{
			return main();
		}

		else
		{
			exit(1);
		}

		break;

	case 2:
		cout << "Esta funcion no esta disponible" << endl;
		return main();
		break;

	case 3:
		cout << "Esta funcion no esta disponible" << endl;
		return main();
		break;

	case 4:
		cout << "Esta funcion no esta disponible" << endl;
		return main();
		break;

	case 5:
		system("cls");
		return main();
		break;

		//utilizo el comando exit para finalizar el programa
	case 6:
		exit(1);
		break;

		//si el usuario elige una opcion invalida lo regreso al menu
	default:
		cout << "Opcion invalida" << endl << "Intente de nuevo" << endl;
		return main();
		break;
	}


}