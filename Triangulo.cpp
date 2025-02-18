#include <stdio.h>

main(){
	int triangulo;
	float angulo1,angulo2,angulo3;
	printf ("Digite el primer angulo\n");
	scanf("%f",&angulo1);
		printf ("Digite el segundo angulo\n");
	scanf("%f",&angulo2);
		printf ("Digite el tercer angulo\n");
	scanf("%f",&angulo3);
	
	triangulo=angulo1+angulo2+angulo3;
	
	if (triangulo==180){
		printf("Es un triangulo\n");
}
		else 
		printf("No es un triangulo\n");
		
    if (angulo1==90 or angulo2==90){
    	printf("Es triangulo rectangulo");
	
	}
	
}


