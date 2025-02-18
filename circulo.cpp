#include <stdio.h>
#include <math.h>
#include <cmath>

main (){
	
	float radio,longitud,area,volumen,diametro,pi=M_PI;
	printf("digite radio \n ");
	scanf("%f",&radio);
	
	longitud=2*pi*radio;
	area=pi*pow(radio,2);
	diametro=radio*2;
	volumen=4/3*pi*pow(radio,3);
	
    printf("longitud es \n%f\narea es\n%f\nvolumen es\n%f",longitud,area,volumen);
	

	
}
