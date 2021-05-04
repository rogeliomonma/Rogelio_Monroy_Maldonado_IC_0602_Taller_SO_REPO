#include "ESTRUCTURA.c"
void ventana(){
	system ("cls");
	printf ("\n\t\t\tTecnologico de Estudios Superiores de Jocotitlan\n");
	printf ("\n\t\t\t\t NOMBRE DEL PROGRAMA:BANCO \n");
	printf ("\n\t\t\t\t ELAVORO:ROGELIO MONROY MALDONADO \n");
	printf ("\n\t\t\t\t FECHA: ");
	printf ("\n");
	system ("pause");
	system ("cls");
	
	printf(".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
    printf("Introduce el numero de paises\n");
    printf(".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
    printf("N=");
	scanf("%d",&num);
	fflush(stdin);
	contador_p=num;
	for(a=1;a<=num;a++){
		printf("\n\tIntroduce el nombre del pais-> [%d]: ",a);
		gets(pa.pais);
		fflush(stdin);
		printf("\t\tIntroduce el numero de clientes del pais->[%d]:",a);
		scanf("%d",&pa.num_clientes);
		fflush(stdin);
		Alta_paises(pa.pais,pa.num_clientes,pa.longitud);
		contador_c+=pa.num_clientes;
	} 
	contador_cc=contador_c;
	do{
		menu();
		printf("\nIngresa una opcion:");
		scanf("%d",&opcion);
		printf("\n-------------------\n");
		
		switch(opcion){
			case 0:
			menu();
			break;
			case 1:
			printf("\t\t\t------------\n");
			printf("\t\t\tAlta Cliente\n");
			printf("\t\t\t------------\n");
				fflush(stdin);
				printf("\n\n\n.-.-.-.-.-.-.-.-.-.-.-.-.-.");
			    printf("\n Introduzca un Pais: ");
                gets(pa.pais);
                printf("\n.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
				bool encontrado=false;
				bool ab=false;
				int flag;
				for(x=0;x<contador_p;x++){
                if(strcmp(tabla_paises[x].pais,pa.pais)==0){
                vr[xx]=tabla_paises[x].num_clientes;
                if(vr[xx]!=0){
                ab=true;	
                flag=contador_c--;
                vr[xx]=tabla_paises[x].num_clientes--;
            
            }else{
            	printf("\t\t\tPAIS INGRESADO LLENO\n");
			}
				}
				}
				if(ab!=false){
				for(z=0;z<=contador_c;z++){
					for(x=0;x<contador_p;x++){
                	if(strcmp(tabla_paises[x].pais,tabla_clientes[z].cliente_banco.persona_cliente.pais)==0){
						if(flag!=0){
							if(vr[xx]!=0){
							printf("La estructura tiene[%d]lugares vacios",vr[xx]);
							encontrado=true;
							}
							else{
								printf("La estructura del pais esta llena");
							}
						}
						else{
						printf("\t\t\tESTRUCTURA LLENA..");	
						}
							}else {
				if(flag!=0 && vr[xx]!=0){
					printf("\t\t\tESTA VACIA..");
					encontrado=true;
				}else if(flag==0){
					printf("\t\t\tESTRUCTURA LLENA..");
				}
				}}}
				}
				if(encontrado !=false){
				printf("\n\n\n Introduzca un nombre(s): ");
                gets(banco.cliente_banco.persona_cliente.nombres);
                fflush(stdin);
                printf("\n\n\n Introduzca un Apellido Paterno: ");
                gets(banco.cliente_banco.persona_cliente.apellido_paterno);
                fflush(stdin);
                printf("\n\n\n Introduzca un Apellido Materno: ");
                gets(banco.cliente_banco.persona_cliente.apellido_materno);
                fflush(stdin);
                printf("\n\n\n Introduzca la edad: ");
                scanf("%d",&banco.cliente_banco.persona_cliente.edad);
                fflush(stdin);
                printf("\n\n\n Introduzca la sexo: ");
                scanf("%c",&banco.cliente_banco.persona_cliente.sexo);
                fflush(stdin);
                printf("\n\n\n Introduzca la Numero de cuenta: ");
                scanf("%llu",&banco.cliente_banco.num_cuenta);
                fflush(stdin);
                printf("\n\n\n Introduzca el numero de tarjeta: ");
                scanf("%llu",&banco.cliente_banco.num_targeta);
                fflush(stdin);
                printf("\n\n\n Introduzca el nip a 4 dijitos: ");
                scanf("%d",&banco.cliente_banco.nip);
                fflush(stdin);
                printf("\n\n\n Introduzca saldo:");
                scanf("%lf",&banco.cliente_banco.saldo);
                fflush(stdin);
                Alta_Cliente(pa.pais,banco.cliente_banco.persona_cliente.nombres,banco.cliente_banco.persona_cliente.apellido_paterno,banco.cliente_banco.persona_cliente.apellido_materno,banco.cliente_banco.persona_cliente.edad,banco.cliente_banco.persona_cliente.sexo,banco.cliente_banco.num_cuenta,banco.cliente_banco.num_targeta,banco.cliente_banco.nip,banco.cliente_banco.saldo,"");
			    fflush(stdin);
			}
			if(!ab){
				if(z==0){
				printf("El pais ingresado no exixte....\n");	
				}	
				
			}
			break;
			case 2:
			printf("\t\t\t------------\n");
			printf("\t\t\tBaja Cliente\n");
			printf("\t\t\t------------\n");
				fflush(stdin);
			    printf("\n\n\n Introduzca un nombre de un cliente: ");
                gets(banco.cliente_banco.persona_cliente.nombres);
                fflush(stdin);
                Baja_cliente(banco.cliente_banco.persona_cliente.nombres);
			break;
			case 3:
			printf("\t\t\t-------------------------\n");
			printf("\t\t\tListar todos los clientes\n");
			printf("\t\t\t-------------------------\n");
			for(x=0;x<contador_cc;x++){
	            printf("\n Pais: %s",tabla_clientes[x].cliente_banco.persona_cliente.pais);
				printf("\n Nombre: %s",tabla_clientes[x].cliente_banco.persona_cliente.nombres);
	            printf("\n Apellido P: %s",tabla_clientes[x].cliente_banco.persona_cliente.apellido_paterno);
	            printf("\n Apellido M: %s",tabla_clientes[x].cliente_banco.persona_cliente.apellido_materno);
	            printf("\n Edad: %d",tabla_clientes[x].cliente_banco.persona_cliente.edad);
	            printf("\n Sexo: %c",tabla_clientes[x].cliente_banco.persona_cliente.sexo);
	            printf("\n Num_Cuenta: %llu",tabla_clientes[x].cliente_banco.num_cuenta);
	            printf("\n Num_Tarjeta:%llu",tabla_clientes[x].cliente_banco.num_targeta);
	            printf("\n Nip:%d",tabla_clientes[x].cliente_banco.nip);
	            printf("\n Saldo:%lf",tabla_clientes[x].cliente_banco.saldo);
	            printf("\n ESTADO:%s",tabla_clientes[x].cliente_banco.estado);
	            printf("\n-------------------------\n");
            }
			break;
			case 4:
			printf("\t\t\t--------\n");
			printf("\t\t\tBUSQUEDA\n");
			printf("\t\t\t--------\n");
				fflush(stdin);
				printf("\n\n\n Introduzca un nombre: ");
                gets(banco.cliente_banco.persona_cliente.nombres);
                fflush(stdin);
                Buscar(banco.cliente_banco.persona_cliente.nombres);
				break;
			case 5:
			printf("\t\t\t-------------------------\n");
			printf("\t\t\tClientes dados de Alta\n");
			printf("\t\t\t-------------------------\n");	
				for(x=0;x<contador_cc;x++){
					if(strcmp(tabla_clientes[x].cliente_banco.estado,"ALTA")==0){
		            printf("\n Pais: %s",tabla_clientes[x].cliente_banco.persona_cliente.pais);
					printf("\n Nombre: %s",tabla_clientes[x].cliente_banco.persona_cliente.nombres);
		            printf("\n Apellido P: %s",tabla_clientes[x].cliente_banco.persona_cliente.apellido_paterno);
		            printf("\n Apellido M: %s",tabla_clientes[x].cliente_banco.persona_cliente.apellido_materno);
		            printf("\n Edad: %d",tabla_clientes[x].cliente_banco.persona_cliente.edad);
		            printf("\n Sexo: %c",tabla_clientes[x].cliente_banco.persona_cliente.sexo);
		            printf("\n Num_Cuenta: %llu",tabla_clientes[x].cliente_banco.num_cuenta);
		            printf("\n Num_Tarjeta:%llu",tabla_clientes[x].cliente_banco.num_targeta);
		            printf("\n Nip:%d",tabla_clientes[x].cliente_banco.nip);
		            printf("\n Saldo:%lf",tabla_clientes[x].cliente_banco.saldo);
		            printf("\n ESTADO:%s",tabla_clientes[x].cliente_banco.estado);
		            printf("\n-------------------------\n");
	            }}
				break;
			case 6:
			printf("\t\t\t------\n");
			printf("\t\t\tABONO\n");
			printf("\t\t\t------\n");
				fflush(stdin);
				printf("\n\n\n Introduzca un nombre: ");
                gets(banco.cliente_banco.persona_cliente.nombres);
                fflush(stdin);
                Abono(banco.cliente_banco.persona_cliente.nombres);
				break;
			case 7:
			printf("\t\t\t------\n");
			printf("\t\t\tRETIRO\n");
			printf("\t\t\t------\n");
				fflush(stdin);
				printf("\n\n\n Introduzca un nombre: ");
                gets(banco.cliente_banco.persona_cliente.nombres);
                fflush(stdin);
                Retiro(banco.cliente_banco.persona_cliente.nombres);
				break;
			case 8:
				for(x=0;x<contador_p;x++){
					printf("El pais->[%s]tiene,[%d],inices vacios\n",tabla_paises[x].pais,tabla_paises[x].num_clientes);
				
				}
				break;
			case 9:
				for(x=0;x<contador_p;x++){
					if(tabla_paises[x].num_clientes==0){
						printf("La estructura esta toda Llena....");
					}else{
						printf("La estructura se esta llenando...");
					}
				}
				break;
			case 10:
				for(x=0;x<contador_p;x++){
					if(tabla_paises[x].num_clientes==tabla_paises[x].longitud){
						printf("La estructura esta toda Vacia....");
				}else{
					printf("La estructura tiene indices vacios...");
				}
				}
				break;
			case 11:
			printf("\t\t\t------\n");
			printf("\t\t\tPaises\n");
			printf("\t\t\t------\n");	
				for(x=0;x<contador_p;x++){
	            printf("Nombre Pais->[%s]\n",tabla_paises[x].pais);
	            
	            }
	        break;
            case 12:
            printf("\t\t\t--------------------\n");
			printf("\t\t\tLongitudes de Paises\n");
			printf("\t\t\t--------------------\n");
	            for(x=0;x<contador_p;x++){
	            printf("Nombre Pais->[%s],Longitud->[%d]\n",tabla_paises[x].pais,tabla_paises[x].longitud);
	            }
            	break;
            case 13:
            printf("\t\t\t-------------\n");
			printf("\t\t\tActualizacion\n");
			printf("\t\t\t-------------\n");
            	fflush(stdin);
				printf("\n\n\n Introduzca un nombre: ");
                gets(banco.cliente_banco.persona_cliente.nombres);
                fflush(stdin);
                Actualizar(banco.cliente_banco.persona_cliente.nombres);
            	break;
            case 14:
            	break;
            	default:
            		exit(0);
		}	
	}while(opcion != 14);
	exit(0);
	
}
