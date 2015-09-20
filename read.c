/*Lectura validada,
 *author Elihu Cruz
 *version 1.3
 *more: https://onlyadeveloper.wordpress.com/
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TOP 1000000

int write(){
		printf("En proceso>>\n");
}

int TypeCorrect(char ok){
	int Check[10] = {0,1,2,3,4,5,6,7,8,9};
	int i,Go = 0;
	for(i=0;i<10;i++){
		if(ok-48 == Check[i])
			Go=1;
	}
	return Go;
}

//Validacion de entradas enteras.
//Recive puntero de variable destino
void readInt(int *IResolve){

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

		if(ok == 1)	*IResolve= atoi(Array);//Convierte y asigna cadena a entera en caso de ser valida
		fflush(stdin);

	}
}

//Validacion de entradas de datos floatantes.
//Recive puntero de variable destino
void readFloat(float *Resolve){

	int ok = 0;//Validator
	while(ok == 0){//Prueba hasta introducir cadena correcta

		ok = 1;//Inicializa validador TRUE
		int i = 0,y = 0;
		char buff,Array[TOP];

		while((buff = getchar()) != '\n'){//Validacion caracter por caracter
			if(buff == '-' || buff == '+' && i==0)
				Array[i++] = buff;

			else{
				if(buff == '.' && y < 1){
					Array[i++] = buff;
					y++;
				}
				else{
					if(TypeCorrect(buff))
						Array[i++] = buff;

					else{
						puts("Caracter invalido, introduzca numeros");
						ok = 0;
						break;
					}
				}
			}
		}
		if(ok == 1) *Resolve= atof(Array);//Convierte y asigna cadena a flotante en caso de ser valida
		fflush(stdin);
	}
}

int main(){
	float A;
	int B;
	printf("lectura 1:\n");
	readInt(&B);//Lectura en B

	printf("lectura 2:\n");
	readFloat(&A);//lectrua en A
	printf("flotante : %f\n",A );
	printf("entero : %d\n",B );

}
