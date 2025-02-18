#include <stdio.h>
#include<string>

int main (){


int color1,color2,color3;

printf("Bandera de colombia\n1. Amarillo\n2. Azul\n3. Rojo\n");
printf("Digite el primer color\n");
scanf("%d",&color1);

if (color1==1) {
printf("Digite el segundo color\n");
scanf("%d",&color2);
if(color2==2){
	printf("Digite el tercer color\n");
	scanf("%d",&color3);
if(color3==3){
	printf("Esta es la bandera de colombia");
}
else
printf("Error...");
}
else 
printf("Error...");
}
else
printf("Error...");

}
