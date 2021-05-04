#include "ESTRUCTURA.h"
//Inicio de funsión para dar de alta paises que revice parametros
void Alta_paises(char pais[50],int num_clientes,int longitud){
    for(x=tam2;x>=0;x--){
        if(x!=0){
            strcpy(tabla_paises[x].pais,tabla_paises[x-1].pais);
            tabla_paises[x].num_clientes=tabla_paises[x-1].num_clientes;
        	tabla_paises[x].longitud=tabla_paises[x-1].longitud;
		}
        else{
           strcpy(tabla_paises[x].pais,pa.pais);
           tabla_paises[x].num_clientes=pa.num_clientes;
           tabla_paises[x].longitud=pa.num_clientes;
        }
    }
    printf("\t-----------------------------");
    printf("\n\t Pais dado de alta con exito\n");
    printf("\t-----------------------------\n");
}
//Fin de funsión para dar de alta paises que revice parametros
void Alta_Cliente(char pais[50],char nom[50],char app[50],char apm[50],int edad,char sex,unsigned long long int nun_cuenta,unsigned long long int num_targeta,int nip,double saldo,char estado[10]){           
	for(x=contador_cc;x>=0;x--){
		
        if(x!=0){
        	strcpy(tabla_clientes[x].cliente_banco.persona_cliente.pais,tabla_clientes[x-1].cliente_banco.persona_cliente.pais);
            strcpy(tabla_clientes[x].cliente_banco.persona_cliente.nombres,tabla_clientes[x-1].cliente_banco.persona_cliente.nombres);
            strcpy(tabla_clientes[x].cliente_banco.persona_cliente.apellido_paterno,tabla_clientes[x-1].cliente_banco.persona_cliente.apellido_paterno);
            strcpy(tabla_clientes[x].cliente_banco.persona_cliente.apellido_materno,tabla_clientes[x-1].cliente_banco.persona_cliente.apellido_materno);
            tabla_clientes[x].cliente_banco.persona_cliente.edad=tabla_clientes[x-1].cliente_banco.persona_cliente.edad;
            tabla_clientes[x].cliente_banco.persona_cliente.sexo=tabla_clientes[x-1].cliente_banco.persona_cliente.sexo;
			tabla_clientes[x].cliente_banco.num_cuenta=tabla_clientes[x-1].cliente_banco.num_cuenta;
			tabla_clientes[x].cliente_banco.num_targeta=tabla_clientes[x-1].cliente_banco.num_targeta;
			tabla_clientes[x].cliente_banco.nip=tabla_clientes[x-1].cliente_banco.nip;
			tabla_clientes[x].cliente_banco.saldo=tabla_clientes[x-1].cliente_banco.saldo;
			strcpy(tabla_clientes[x].cliente_banco.estado,"ALTA");
        }
        else{
        	strcpy(tabla_clientes[x].cliente_banco.persona_cliente.pais,pa.pais);
            strcpy(tabla_clientes[x].cliente_banco.persona_cliente.nombres,banco.cliente_banco.persona_cliente.nombres);
            strcpy(tabla_clientes[x].cliente_banco.persona_cliente.apellido_paterno,banco.cliente_banco.persona_cliente.apellido_paterno);
            strcpy(tabla_clientes[x].cliente_banco.persona_cliente.apellido_materno,banco.cliente_banco.persona_cliente.apellido_materno);
            tabla_clientes[x].cliente_banco.persona_cliente.edad=banco.cliente_banco.persona_cliente.edad;
            tabla_clientes[x].cliente_banco.persona_cliente.sexo=banco.cliente_banco.persona_cliente.sexo;
			tabla_clientes[x].cliente_banco.num_cuenta=banco.cliente_banco.num_cuenta;
			tabla_clientes[x].cliente_banco.num_targeta=banco.cliente_banco.num_targeta;
			tabla_clientes[x].cliente_banco.nip=banco.cliente_banco.nip;
			tabla_clientes[x].cliente_banco.saldo=banco.cliente_banco.saldo;
			strcpy(tabla_clientes[x].cliente_banco.estado,"ALTA");
        }
    }
    printf("\n\n\t Cliente creado con exito. \n\n\n");
    
}

void Baja_cliente(char nom[50]){
    bool encontrado=false;
    for(x=0;x<contador_cc;x++){
        if(strcmp(tabla_clientes[x].cliente_banco.persona_cliente.nombres,banco.cliente_banco.persona_cliente.nombres)==0){
            strcpy(tabla_clientes[x].cliente_banco.persona_cliente.pais,tabla_clientes[x].cliente_banco.persona_cliente.pais);
            strcpy(tabla_clientes[x].cliente_banco.persona_cliente.nombres,tabla_clientes[x].cliente_banco.persona_cliente.nombres);
            strcpy(tabla_clientes[x].cliente_banco.persona_cliente.apellido_paterno,tabla_clientes[x].cliente_banco.persona_cliente.apellido_paterno);
            strcpy(tabla_clientes[x].cliente_banco.persona_cliente.apellido_materno,tabla_clientes[x].cliente_banco.persona_cliente.apellido_materno);
            tabla_clientes[x].cliente_banco.persona_cliente.edad=tabla_clientes[x].cliente_banco.persona_cliente.edad;
            tabla_clientes[x].cliente_banco.persona_cliente.sexo=tabla_clientes[x].cliente_banco.persona_cliente.sexo;
			tabla_clientes[x].cliente_banco.num_cuenta=tabla_clientes[x].cliente_banco.num_cuenta;
			tabla_clientes[x].cliente_banco.num_targeta=tabla_clientes[x].cliente_banco.num_targeta;
			tabla_clientes[x].cliente_banco.nip=tabla_clientes[x].cliente_banco.nip;
			tabla_clientes[x].cliente_banco.saldo=tabla_clientes[x].cliente_banco.saldo;
			strcpy(tabla_clientes[x].cliente_banco.estado,"BAJA");
            encontrado=true;
            printf("\n\n\n\t Cliente dado de baja con exito... \n\n\n\n");
            break;
        }}
    if(!encontrado) printf("\n\n\n\t Lo siento, cliente no encontrado... \n\n\n\n");
    getchar();
    }
    
void Buscar(char nom[50]){
    bool encontrado=false;
    for(x=0;x<contador_cc;x++){
        if(strcmp(tabla_clientes[x].cliente_banco.persona_cliente.nombres,banco.cliente_banco.persona_cliente.nombres)==0){
            printf("\n Pais: %s",tabla_clientes[x].cliente_banco.persona_cliente.pais);
			printf("\n Nombre: %s",tabla_clientes[x].cliente_banco.persona_cliente.nombres);
            printf("\n Apellido P: %s",tabla_clientes[x].cliente_banco.persona_cliente.apellido_paterno);
            printf("\n Apellido M: %s",tabla_clientes[x].cliente_banco.persona_cliente.apellido_materno);
            printf("\n Edad: %d",tabla_clientes[x].cliente_banco.persona_cliente.edad);
            printf("\n Sexo: %c",tabla_clientes[x].cliente_banco.persona_cliente.sexo);
            printf("\n Num_Cuenta: %llu",tabla_clientes[x].cliente_banco.num_cuenta);
            printf("\n Num_Tarjeta%llu",tabla_clientes[x].cliente_banco.num_targeta);
            printf("\n Nip:%d",tabla_clientes[x].cliente_banco.nip);
            printf("\n Saldo:%lf",tabla_clientes[x].cliente_banco.saldo);
            printf("\n ESTADO:%s",tabla_clientes[x].cliente_banco.estado);
		    encontrado=true;
            break;
        }
    }
    if(!encontrado) printf("\n\n\t Lo siento, cliente no encontrado... \n\n\n");
    getchar();
}
void Abono(char nom[50]){
	double abono=0;
    bool encontrado=false;
    for(x=0;x<contador_cc;x++){
        if(strcmp(tabla_clientes[x].cliente_banco.persona_cliente.nombres,banco.cliente_banco.persona_cliente.nombres)==0){
            printf("\n Ingresa la cantidad a abonar:");
            fflush(stdin);
			scanf("%lf",&abono);
            tabla_clientes[x].cliente_banco.saldo=tabla_clientes[x].cliente_banco.saldo+abono;
			encontrado=true;
			printf("Abonado con  con exito..:)");
            break;
        }
    }
    if(!encontrado) printf("\n\n\t Lo siento, cliente no encontrado... \n\n\n");
    getchar();
}
void Retiro(char nom[50]){
	double abono=0;
    bool encontrado=false;
    for(x=0;x<contador_cc;x++){
        if(strcmp(tabla_clientes[x].cliente_banco.persona_cliente.nombres,banco.cliente_banco.persona_cliente.nombres)==0){
            printf("\n Ingresa la cantidad a Retirar:");
            fflush(stdin);
			scanf("%lf",&abono);
            tabla_clientes[x].cliente_banco.saldo=tabla_clientes[x].cliente_banco.saldo-abono;
			encontrado=true;
			printf("Retirado con exito..:)");
            break;
        }
    }
    if(!encontrado) printf("\n\n\t Lo siento, cliente no encontrado Retiro No Procesado... \n\n\n");
    getchar();
}
void Actualizar(char nom[50]){
    bool encontrado=false;
    int opcion2=0;
    for(x=0;x<contador_cc;x++){
        if(strcmp(tabla_clientes[x].cliente_banco.persona_cliente.nombres,banco.cliente_banco.persona_cliente.nombres)==0){
           fflush(stdin);
           	do{
		 		menu_actualizar();
				printf("\nIngresa una opcion para actualizar:");
				scanf("%d",&opcion2);
				printf("\n----------------------------------\n");
				fflush(stdin);
				switch(opcion2){
				case 1:
				    printf("\n\n\n Introduzca un nombre(s): ");
	                gets(tabla_clientes[x].cliente_banco.persona_cliente.nombres);
	                fflush(stdin);
	                encontrado=true;
	                printf("\t\t\tActualizado con exito...");
                	break;
                case 2:
	                printf("\n\n\n Introduzca un Apellido Paterno: ");
	                gets(tabla_clientes[x].cliente_banco.persona_cliente.apellido_paterno);
	                fflush(stdin);
	                encontrado=true;
	                printf("\t\t\tActualizado con exito...");
	                break;
                case 3:
	                printf("\n\n\n Introduzca un Apellido Materno: ");
	                gets(tabla_clientes[x].cliente_banco.persona_cliente.apellido_materno);
	                fflush(stdin);
	                encontrado=true;
	                printf("\t\t\tActualizado con exito...");
	                break;
                case 4:
	                printf("\n\n\n Introduzca la edad: ");
	                scanf("%d",&tabla_clientes[x].cliente_banco.persona_cliente.edad);
	                fflush(stdin);
	                encontrado=true;
	                printf("\t\t\tActualizado con exito...");
	                break;
                case 5:
	                printf("\n\n\n Introduzca la sexo: ");
	                scanf("%c",&tabla_clientes[x].cliente_banco.persona_cliente.sexo);
	                fflush(stdin);
	                encontrado=true;
	                printf("\t\t\tActualizado con exito...");
	                break;
                case 6:
	                printf("\n\n\n Introduzca la Numero de cuenta: ");
	                scanf("%ld",&tabla_clientes[x].cliente_banco.num_cuenta);
	                fflush(stdin);
	                encontrado=true;
	                printf("\t\t\tActualizado con exito...");
	                break;
                case 7:
	                printf("\n\n\n Introduzca el numero de tarjeta: ");
	                scanf("%ld",&tabla_clientes[x].cliente_banco.num_targeta);
	                fflush(stdin);
	                encontrado=true;
	                printf("\t\t\tActualizado con exito...");
	                break;
                case 8:
	                printf("\n\n\n Introduzca el nip a 4 dijitos: ");
	                scanf("%d",&tabla_clientes[x].cliente_banco.nip);
	                fflush(stdin);
	                encontrado=true;
	                printf("\t\t\tActualizado con exito...");
	                break;
                }	
	       }while(opcion2 !=9);
		        
            break;
        }
    }
    if(!encontrado) printf("\n\n\t Lo siento, cliente no encontrado... \n\n\n");
    getchar();
}
