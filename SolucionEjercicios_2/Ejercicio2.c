
#include <stdlib.h>
int main(){
char arrayChar[5];
/*arrayChar[0]='a';
arrayChar[1]='b';
arrayChar[2]='c';
arrayChar[3]='d';
arrayChar[4]='e';*/
 int i=0;
for (i=0;i<=5;i++){
arrayChar[i++]='a';
arrayChar[i++]='b';
arrayChar[i++]='c';
arrayChar[i++]='d';
arrayChar[i++]='e';
}
for (i=0;i<=4;i++){
		printf("La letras son:%c \n",arrayChar[i]);
}


	char *punteroChar;
	punteroChar=&arrayChar[0];
	
	char *punteroCharDos;
	punteroCharDos=&arrayChar[0];
	
	printf("%c\n",arrayChar[0]);
	
	printf("%c\n",*punteroChar);
	
	printf("%c\n",*punteroCharDos);
	
	printf("%c\n",arrayChar[4]);
	
	printf("%c\n",*(punteroChar+4));
	
	printf("%c\n",*(punteroCharDos+4));
	
	for (i = 0; i < 5; ++i)
	{
		printf("%c", *(punteroCharDos+i));
	}
	printf("\n");
	
	for (i = 0; i < 5; ++i)
	{
		printf("%c", *(punteroCharDos+i)); 
	}
	printf("\n");
    return 0;
    	}