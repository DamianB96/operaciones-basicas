#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
		printf("*********************************************************************** \n");
		printf("* Este programa hace las 4 funciones matematicas basicas y las elegis * \n");
		printf("*********************************************************************** \n");
			
			
		int a, b, c, r1, r2, r3, r4;
	
		printf("Para sumar digite un 1, para restar, un 2, para multiplicar, un 3 y para dividir, un 4 \n");
		scanf("%d", &c);
		
		printf("Dame el primer numero ");
		scanf("%d", &a);
		
		printf("Dame el segundo numero ");
		scanf("%d", &b);
		
		
		switch (c){
		case 1 :
			r1 = a + b;
		printf("El resultado de la suma da: %d", r1);
		break;
		
		case 2 :
			 r2 = a - b;
		printf("El resultado de la resta da: %d", r2);
		break;
		
		case 3 :
			r3 = a * b;
		printf("El resultado de la multiplicacion da: %d", r3);
		break;
		
		case 4 :
			r4 = a / b;
		printf("El resultado de la division da: %d", r4);
		break;
		default :
		 printf("Operacion no reconocida");
			
		}
		



	return 0;
}
