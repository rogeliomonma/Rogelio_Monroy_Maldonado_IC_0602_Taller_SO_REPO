#include "scheduler.h"
void *reproducir_musica(void *params);
void *descargando_archivo(void *params);
void *proceso_general(void *params);


int main(int argc, char const *argv[]){

	process *p1 = crear_Proceso(1, UN_SEGUNDO, "Tarea_1", "Reproducir Música", ACTIVO, reproducir_musica);
	process *p2 = crear_Proceso(1, DOS_SEGUNDOS, "Tarea_2", "Abrir Youtube", NO_ACTIVO, proceso_general);
	process *p3 = crear_Proceso(3, TRES_SEGUNDOS, "Tarea_3", "Escribir Texto en Word", ACTIVO, proceso_general);
	process *p4 = crear_Proceso(4, TRES_SEGUNDOS, "Tarea_4", "Descargando Archivo", ACTIVO, descargando_archivo);
	process *p5 = crear_Proceso(3, TRES_SEGUNDOS, "Tarea_5", "Subiendo Archivo", ACTIVO, proceso_general);
	process *p6 = crear_Proceso(4, TRES_SEGUNDOS, "Tarea_6", "Compilando programa", NO_ACTIVO, proceso_general);
	process *p7 = crear_Proceso(0, TRES_SEGUNDOS, "Tarea_7", "Ejecutando programa", ACTIVO, proceso_general);
	process *p8 = crear_Proceso(2, CUATRO_SEGUNDOS, "Tarea_8", "Usando la terminal", ACTIVO, proceso_general);
	process *p9 = crear_Proceso(5, CUATRO_SEGUNDOS, "Tarea_9", "Usando la terminal", NO_ACTIVO, proceso_general);
	

	array_procesos *array = crear_ArrayProcesos();

	agregar_Proceso(array, *p1);
	agregar_Proceso(array, *p2);
	agregar_Proceso(array, *p3);
	agregar_Proceso(array, *p4);
	agregar_Proceso(array, *p5);
	agregar_Proceso(array, *p6);
	agregar_Proceso(array, *p7);
	agregar_Proceso(array, *p8);
	agregar_Proceso(array, *p9);

	ejecutar_Procesos(array);

	free(array);
	free(p1);
	free(p2);
	free(p3);
	free(p4);
	free(p5);
	free(p6);
	free(p7);
	free(p8);
	free(p9);

	return 0;
}

void *reproducir_musica(void *params){
	char *proceso_realizar;
	proceso_realizar = (char *)params;
	printf("\t ======> EJECUTANDO PROCESO: [%s]\n", proceso_realizar);
	pthread_exit(NULL);
}

void *descargando_archivo(void *params){
	char *proceso_realizar;
	proceso_realizar = (char *)params;
	printf("\t ======> EJECUTANDO PROCESO: [%s]\n", proceso_realizar);
	pthread_exit(NULL);
}

void *proceso_general(void *params){
	char *proceso_realizar;
	proceso_realizar = (char *)params;
	printf("\t ======> EJECUTANDO PROCESO: [%s]\n", proceso_realizar);
	pthread_exit(NULL);
}
