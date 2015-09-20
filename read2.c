/*Lectura validada,
 *author Elihu Cruz
 *version 1.3
 *more: https://onlyadeveloper.wordpress.com/
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TOP 1000000//buffer

int write(){
		printf("En proceso>>\n");
}

int TypeCorrect(char ok){
	int nada;
	int Check[10] = {0,1,2,3,4,5,6,7,8,9};
	int i,Go = 0;
	for(i=0;i<10;i++){
		if(ok-48 == Check[i])
			Go=1;
	}
	return Go;
}

void readInt(char type[]){//introduce tipo de dato :: %d : entero y ::%f : flotante. Seguido por La variable por un puntero (&Variable)
	//en la primer posicion colocar el valor entero, de lo contrario colocar en la segunda posicion la variable read("%f",0,&Variable)
	int ok = 0;
	while(ok == 0){
		ok = 1;
		int i=0,y = 0;
		char buff,Array[TOP];

			while((buff = getchar()) != '\n'){
				if(buff == '-' || buff == '+' && i==0){
					Array[i] = buff;
					i++;
				}
				else{

					if(TypeCorrect(buff)){
						Array[i] = buff;
						i++;
					}
					else{
						puts("Caracter invalido, introduzca numeros");
						ok = 0;
						break;
					}
				}
			}
			if(ok == 1){

			}

				return atoi(Array);

int main(){
	float A;
	read("%f",0,&A);
	printf("%f\n",A );

}
