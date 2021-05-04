#include "scheduler.h"
#include <pthread.h>
void reproducir_musica(void);
void abrir_youtube(void);
void escribir_texto_word(void);
void descargar_archivo(void);
void subiendo_archivo(void);
void compilando_programa(void);
void ejecutando_programa(void);
void usando_terminal(void);
//void *crear_proceso_hilo1(void *arg);
int main(int argc, char const *argv[]){
   
 pthread_t hilo1, hilo2,hilo3,hilo4,hilo5,hilo6,hilo7,hilo8,hilo9;
 struct PROCESS param1 = {1, UN_SEGUNDO,   "Proceso_1",abrir_youtube, ACTIVO};
 struct PROCESS param2 = {1, DOS_SEGUNDOS, "Proceso_1",reproducir_musica,NO_ACTIVO};
 struct PROCESS param3 = {3, TRES_SEGUNDOS,"Proceso_2", escribir_texto_word, ACTIVO}; 	
 struct PROCESS param4 = {4, TRES_SEGUNDOS,"Proceso_3", descargar_archivo, ACTIVO};  	
 struct PROCESS param5 = {3, TRES_SEGUNDOS,"Proceso_4", subiendo_archivo, ACTIVO};	
 struct PROCESS param6 = {4, TRES_SEGUNDOS,"Proceso_5", compilando_programa, NO_ACTIVO};
 struct PROCESS param7 = {0, TRES_SEGUNDOS,"Proceso_6", ejecutando_programa, ACTIVO};		
 struct PROCESS param8 = {2, CUATRO_SEGUNDOS,"Proceso_7", usando_terminal, ACTIVO};		
 struct PROCESS param9 = {5, CUATRO_SEGUNDOS,"Proceso_8", usando_terminal, NO_ACTIVO};
 /*
  * Creamos dos hilos
  */
 /* La función la pasaremos como (void*)nombreFuncion.
  * Es decir, hacemos un CAST a void*.
  * También es importante realizar esto con la dirección de memorio
  * de la variable que contiene los parámetros.
  */
 pthread_create (&hilo1, NULL, (void*)crear_Proceso,&param1 );
 pthread_create (&hilo2, NULL, (void*)crear_Proceso,&param2 );
 pthread_create (&hilo3, NULL, (void*)crear_Proceso,&param3 );
 pthread_create (&hilo4, NULL, (void*)crear_Proceso,&param4 );
 pthread_create (&hilo5, NULL, (void*)crear_Proceso,&param5 );
 pthread_create (&hilo6, NULL, (void*)crear_Proceso,&param6 );
 pthread_create (&hilo7, NULL, (void*)crear_Proceso,&param7 );
 pthread_create (&hilo8, NULL, (void*)crear_Proceso,&param8 );
 pthread_create (&hilo9, NULL, (void*)crear_Proceso,&param9 );
 /*
  * Esperamos la finalización de los hilos
  */
pthread_join(hilo1, NULL);
pthread_join(hilo2, NULL);
pthread_join(hilo3, NULL);
pthread_join(hilo4, NULL);
pthread_join(hilo5, NULL);
pthread_join(hilo6, NULL);
pthread_join(hilo7, NULL);
pthread_join(hilo8, NULL);
pthread_join(hilo9, NULL);

 array_procesos *array = crear_ArrayProcesos();
    
	agregar_Proceso(array, param1);
	agregar_Proceso(array, param2);
	agregar_Proceso(array, param3);
    agregar_Proceso(array, param4);
    agregar_Proceso(array, param5);
    agregar_Proceso(array, param6);
    agregar_Proceso(array, param7);
    agregar_Proceso(array, param8);
    agregar_Proceso(array, param9);

   ejecutar_Procesos(array);
/*
	free(array);
	free(param1);
	free(param2);
	*/
 printf("Han finalizado los thread.\n");
}

void reproducir_musica(void){
	printf("Reproduciendo Música\n");
}

void abrir_youtube(void){
	printf("Usando Youtube\n");
}

void escribir_texto_word(void){
	printf("Escribiendo Texto en Word\n");
}

void descargar_archivo(void){
	printf("Descargando Archivo\n");
}

void subiendo_archivo(void){
	printf("Subiendo Archivo\n");
}

void compilando_programa(void){
	printf("Compilando programa\n");
}

void ejecutando_programa(void){
	printf("Ejecutando programa\n");
}

void usando_terminal(void){
	printf("Usando la terminal\n");
}/*
void *crear_proceso_hilo1(void *arg){
	process *p1 = crear_Proceso(1, UN_SEGUNDO, "Proceso_1", reproducir_musica, ACTIVO); 
}
*/