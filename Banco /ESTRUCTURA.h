#ifndef __ESTRUCTURA__
#define __ESTRUCTURA__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include "conf_estructura.h"
	//Inicio de Declaración de prototipos de funciones
	void Alta_paises(char nom[50],int num_clientes,int longitud);
	void Buscar(char nom[50]);
	void Alta_Cliente(char pais[50],char nom[50],char app[50],char apm[50], int edad,char sex, unsigned  long long int nun_cuenta,unsigned  long long int num_targeta,int nip,double saldo,char estado[10]);
	void modificar(char nom[50]);
	void Abono(char nom[50]);
	void Retiro(char nom[50]);
	void Actualizar(char nom[50]);
	//Fin de Declaración de prototipos de funciones
	//Inicio de creacion de estructuras
	struct paises{
		char pais[50];
		int num_clientes;
		int longitud;
	};
	struct persona{
		char pais[50];
		char nombres[50];
		char apellido_paterno[50];
		char apellido_materno[50];
		int edad;
		char sexo;
	};
	;
	struct cliente{
		struct  persona persona_cliente ;
		unsigned long long int num_cuenta;
		unsigned long long int num_targeta;
		int nip;
		double saldo;
		char estado[10];
	};
	 struct bancos{
		struct  cliente cliente_banco ;
	};
	//Fin de creación de estructuras
//Inicio asignación de nombres a estructuras
	struct bancos banco;
	struct paises pa;
//Fin asignación de nombres a estructuras
//Inicio de creacion de vectores para almacenar estructuras
  	struct bancos tabla_clientes[tam ]={};
  	struct paises tabla_paises[tam2]={};
//Fin de creacion de vectores para almacenar estructuras
//Inicio de declaración de variables globales
//x ,z y xx sirven para recorrer el vectory evitar choques entre variables.
//opcio nos permite elegir una opción del menú.
//contador_cc Acomulara el número de clientes de todos los paises.
//vr[x] acomulara el numero de clientes de la tabla_paies    
	int x,xx,opcion=1,z=0,contador_cc;
    int vr[5],x;
//Fin de declaración de variables globales
//Inicio de la función menú
void menu(){
        printf("\n---------Menu-------\n");
        printf(" 0.- Mostrar menu.\n");
        printf(" 1.- Dar de alta Cliente.\n");
        printf(" 2.- Dar de baja Cliente.\n");
        printf(" 3.- Mostrar todos los clientes.\n");
        printf(" 4.- Mostrar cliente en especifico.\n");
        printf(" 5   Mostrar solo clientes dados de alta.\n");
        printf(" 6.- Abonar saldo a cliente.\n");
        printf(" 7.- Retirar saldo de cliente.\n");
        printf(" 8.- Buscar indice vacio en toda la estructura.\n");
        printf(" 9.- Mostrar si esta toda llena la estructura.\n");
        printf(" 10.-Mostrar si esta toda vacia la estructura.\n");
        printf(" 11.-Mostrar nombre de paises.\n");
        printf(" 12.-Mostrar longitudes.\n");
        printf(" 13.-Actualizar datos de cliente especifico.\n");
        printf(" 14.-Salir.\n");
        printf("-------------------------------");
	}
//Fin de la función menú esta se ocupara en cada interación
	void menu_actualizar(){
        printf("\n---------Menu Actualizar-------\n");
        printf(" 1.- Actualizar Nombre(s).\n");
        printf(" 2.- Actualizar Apellido P.\n");
        printf(" 3.- Actualizar Apellido M.\n");
        printf(" 4.- Actualizar Edad.\n");
        printf(" 5.- Actualizar Sexo.\n");
        printf(" 6   Actualizar Nu_Cuneta.\n");
        printf(" 7.- Actualizar Num_Targeta.\n");
        printf(" 8.- Actualizar Nip.\n");
        printf(" 9.- Salir al menu principal.\n");
        printf("-------------------------------");
	}

#endif
