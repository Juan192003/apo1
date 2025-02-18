#include<stdio.h>

main ()
{

int numero1;
float numero2;

printf("Digite el color del semaforo: \n1:Rojo \n2:Amarrillo\n3:Verde\n");

scanf ("%d",&numero1);

if (numero1==1 or numero1==3)
    printf("Sigue el amarillo");

else if(numero1==2)
{
	printf("digite el color de donde venia");
	scanf("%f",&numero2);
}

if (numero2==1){
	printf("sigue verde");
}

if (numero2==3){
	  printf("sigue el Rojo");
}

else if (numero2==2 or numero2>=4){
	printf("Error...");
}

else if (numero1>=4 or numero1<=0){
	printf("error");
}

}
