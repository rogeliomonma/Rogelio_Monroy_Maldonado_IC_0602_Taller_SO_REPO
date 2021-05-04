  #include<stdio.h>
 #include<stdlib.h>
 static int n;
 int i,j,Tiempo_Total=0;
 //i j Valirables para moverse entre posiciones del arreglo.
 //Tiempo_Total Variable que acomulara el tiempo total de la ejecución.
 int quantum[];
 int tiempo=0,front=0,sig=0,q_cont=0,m=0,s=0;
 struct datos{
 	int TLL,TEJ,TF,TR,TE;
 	//at=T.Llegada st=T.Ejecucion ct=T.Final tat=T.Respuesta wt=T.Espera
 	char nombreproc[20];
 	//nombreproce variable para acomular el nombre de cada proceso.
 }temp; 
 int main(){
 	system ("cls");
 	printf ("\n\t\t CARRERA:Ingenieria en Sistemas Computacionales");
	printf ("\n\t\t NOMBRE DEL PROGRAMA:Planificador de Procesos con algoritmo Round Robin");
	printf ("\n\t\t ELAVORO:ROGELIOMONROY MALDONADO ");
	printf ("\n\t\t FECHA:05/03/2021 ");
	printf ("\n");
	system ("pause");
	system ("cls");
 	printf("\t\t\t--------------------------------------\n");
 	printf("\t\t\tAlgoritmo de Planificacion Round Robin\n");
 	printf("\t\t\t--------------------------------------\n");
 	printf("1.Ingrese el numero de procesos:");
	scanf("%d",&n);
	struct datos aa[n];
 	for(i=0;i<n;i++){
		 printf("\t\t*Ingrese el nombre del proceso,Tiempo de llegada,Tiempo de ejecucion-->[%d]:\n",i);
		 scanf("\t\t%s",&aa[i].nombreproc);
		 scanf("\t\t%d%d",&aa[i].TLL,&aa[i].TEJ);
    }
    for(i=0;i<n;i++){
    	for(j=i;j>=1;j--){
        if(aa[j].TLL<aa[j-1].TLL){
        	temp=aa[j-1];
			aa[j-1]=aa[j];
			aa[j]=temp;
		}
		else if(aa[j].TLL==aa[j-1].TLL){
			if(aa [j].TEJ<aa[j-1].TEJ){
			temp=aa[j-1]; 
            aa[j-1]=aa[j];
            aa[j]=temp;
			}
        }
		}
   }
   Tiempo_Total+=aa[0].TLL+aa[0].TEJ;
   for(i=1;i<n;i++){
   	if(aa[i].TLL>Tiempo_Total)
    Tiempo_Total=aa[i].TLL;
    Tiempo_Total+=aa[i].TEJ;     
	}
Operaciones(aa);
}
void Operaciones(struct datos a[]){
	int temp_st[n],flag=0,cont=0,proceso_p;
	j=0;
	int tq;
	printf("Ingresa numero de quantum:");
	scanf("%d",&tq);
	for(i=0;i<n;i++){
		temp_st[i]=a[i].TEJ;
	}
	tiempo=a[0].TLL;
	q_cont=1;
	push(j++);
	while(tiempo<=Tiempo_Total){
		if(flag==1||q_cont!=0){
		
		if(flag==0 && cont==0){
			proceso_p=pop();
			cont=0;
			flag=1;
		}
		temp_st[proceso_p]--;
		if(temp_st[proceso_p]==0){
			tiempo++;
			cont=0;
			a[proceso_p].TF=tiempo;
			flag=0;
			q_cont--;
			check(a);
			continue;
			}
			cont++;
			if (cont==tq){
			cont=0;
			tiempo++;
			check(a);
			push(proceso_p);
			flag=0;
			}else{
			tiempo++;
			check(a); }
			}else{
			tiempo++;
			check(a);
			}
		}
		Impresion(a);
	}
void push(int q){
		quantum[sig++]=q;
		m++;
	}
int pop(){
	s++;
	int x;
	x=quantum[front++];
	return x;
}
void check(struct datos a[]){
	
	while(a[j].TLL<=tiempo && j<n){
		q_cont++;
		push(j++);
	}}
void Impresion(struct datos a[]){
	printf("Cambio de Contexto=%d \n",n);
	for(i=0;i<n;i++){
		a[i].TR=a[i].TF-a[i].TLL;
		a[i].TE=a[i].TR-a[i].TEJ;
	}
	
	printf("\t\t\t\t-------------------\n");
	printf("\t\t\t\tTabla de resultados\n");
	printf("\t\t\t\t-------------------\n");
	printf("Nombre\tT.Llegada\tT.Ejecucion\tT.Final\tT.Respuesta\tT.Espera\n");
	for(i=0;i<n;i++){
	printf("%s\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\n",a[i].nombreproc,a[i].TLL,a[i].TEJ,a[i].TF,a[i].TR,a[i].TE);
	
}

}
