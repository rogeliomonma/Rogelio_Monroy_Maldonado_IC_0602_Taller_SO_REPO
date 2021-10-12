#include <stdio.h>
#include <conio.h>
void main()
{
	int N=0;
	printf("**********************************\n");
	printf("Ingresa la  longitud del arreglo\n");
	printf("**********************************\n");
	printf("N->");
	scanf("%d",&N);
    int num[N];
    int i;

    srand(time(NULL));

   for(i=0;i<N;i++)
   {
       num[i]=rand()%11;
   }
    printf("Tabla de valores del Array\n");
    for(i=0;i<N;i++)
    {
		printf("Num[%d]= ", i);
        printf("%d\n ", num[i]);
    }    
    int mayor;
	int menor;
    mayor=num[0];
    menor= num[0];
    float promedio;
    int total;

    for (i=0; i<N; i++){
        if (num[i]> mayor){
            mayor=num[i];
        }

        if (num[i]< menor){
            menor=num[i];
        }

        total+=num[i];
    }
    printf("\nEl mayor es %d\n", mayor);
    printf("El menor es %d\n", menor);

    promedio = total/N;
    printf("El Media es:%f\n",promedio);
}
