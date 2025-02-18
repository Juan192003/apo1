#include <stdio.h>

main()
{
	float angulo1,angulo2,angulo3,suma;
	 printf("digite 1\n");
	 scanf("%f",&angulo1);
	  printf("digite 2\n");
	 scanf("%f",&angulo2);
	  printf("digite 3\n");
	 scanf("%f",&angulo3);
		
		
		if(angulo1==angulo2 or angulo2==angulo3 or angulo1==angulo3)
			printf("es isoseles\n");
		 if(angulo1>=91 or angulo1<=89 or angulo2>=91 or angulo2<=89 or angulo3>=91 or angulo3<=89)
			printf("es otro");
			else if(angulo1!=angulo2 and angulo2!=angulo3 and angulo1!=angulo3)
			printf("escaleno\n");
}
	 

