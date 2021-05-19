#include <stdio.h>
#include <stdlib.h>
int main(){
char x[4];
char *p;
char y[4];
char *puntero;
    x[0]='x';
    p=&x;
	p= &x;
    printf("\nEl contenido de x es =%c",x[0]); 
	p=&x; 
	printf("\nEl contenido de p es =%c",*p);
	*p=(*p)+1;
	printf("\nEl contenido de p+1 es =%c",*p);
	*p=(*p)+2;
	printf("\nEl contenido de p+2 es =%c",*p);
	x[0]='y';
	p=&y;
	printf("\nEl contenido de p es =%p",&p);
	return 0;
}