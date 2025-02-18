#include<stdio.h>
main (){
	
	float angulo1,angulo2,angulo3,suma;
	 printf("Digite el primer angulo\n");
	 scanf("%f",&angulo1);
	  printf("Digite el segundo angulo\n");
	 scanf("%f",&angulo2);
	  printf("Digite el tercer angulo\n");
	 scanf("%f",&angulo3);
	 
	 suma=angulo1+angulo2+angulo3;
	// printf("%f",suma);
	 
	 if (suma>=181 or suma<=179){
	 printf("No es un triangulo");
	 }
	 else if (angulo1==90 or angulo2==90 or angulo3==90)
	 {
	 	printf("Es triangulo rectangulo");
	 }
	 else if (angulo1==angulo2 or angulo2==angulo3 or angulo1==angulo3){
	 	printf("Es triangulo isoseles");
	 }
	 else if(angulo1!=angulo2 and angulo2!=angulo3 and angulo1!=angulo3){
	 	printf("Es triangulo escaleno");
	 }
	
}
