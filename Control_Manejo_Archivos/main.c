
#include "macros_archivos.h"
#include "funcion_listar.c"
#include "funciones_ordenar.c"


void main(int argc,char *argv[])
{
  lista lista=NULL;
  FILE *archi;
  FILE *aux;

  char linea[TAM];
  archi=fopen("lista.txt","r+");
  aux=fopen("aux.txt","w+");
  printf("\n ----------Cadenas a insertar --------\n ") ;
  int v=0;
  
  while(!feof(archi)&&!ferror(archi))
  {
     
   fscanf(archi,"%s",linea);
   fputs(linea,aux);
   fputs("\n",aux);
   puts(linea);
   insertar(&lista,linea);
  }
  fclose(archi);
  fclose(aux);
  


mostrarlista(lista);
borrarlista(&lista);

printf("\n\t--------- LISTA ORDENADA------------\n\n");
// Arreglo de cadenas: aquí almacenamos todas las palabras
    char palabras[CANTIDAD_PALABRAS][MAXIMA_LONGITUD_CADENA];
    // Útil para leer el archivo
    char buferArchivo[MAXIMA_LONGITUD_CADENA];
    // Abrir el archivo...
    FILE *archivo = fopen(NOMBRE_ARCHIVO, "r+");
    if (archivo == NULL)
    {
        printf("No se puede abrir el archivo");
        
    }
    // Necesitamos este ayudante para saber en qué línea vamos
    int indice = 0;
    // Mientras podamos leer una línea del archivo
    
    while (fgets(buferArchivo, MAXIMA_LONGITUD_CADENA, archivo))
    {
        
        // Remover salto de línea
        strtok(buferArchivo, "\n");
        // Copiar la línea a nuestro arreglo, usando el índice
        memcpy(palabras[indice], buferArchivo, MAXIMA_LONGITUD_CADENA);
        // Aumentarlo en cada iteración
        indice++;
        
        
    } 
    
     // Terminamos de leer
     fclose(archivo);
    // Ahora ya tenemos el arreglo. Vamos a ordenarlo.
    // La función no devuelve nada, pues modifica al arreglo de manera interna
    int longitud=sizeof(palabras)/sizeof(palabras[0]);
    burbuja(palabras,longitud);
    int i=0;
    int s=CANTIDAD_PALABRAS-indice;
    for (i =s; i < longitud-1; i++)
    {
        printf("%s\n", palabras[i]);
    }
}




