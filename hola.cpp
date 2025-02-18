#include <stdio.h>

main()
{
	int primera_fase, segunda_fase;
		
	printf("!!!!! SEMAFORO !!!!! \n\n1.ROJO\n2.AMARILLO\n3.VERDE\n4.SALIR \n\n");
		
	printf("DIGITE LA PRIMERA FASE: ");
	scanf("%d",&primera_fase);
	 
	 
	//PRIMERA CONDICION
	if(primera_fase == 1){
	 	 printf("La siguiente parada es amarillo");
	}
	else if(primera_fase == 2 )
	{
		printf("DIGITE LA SEGUNDA FASE: ");
		scanf("%d",&segunda_fase);
		
		if(segunda_fase == 1)
		printf("La siguiente fase es VERDE");
		else if(segunda_fase == 3)
		printf("La siguiente fase es ROJA");
	}
	
    else if(primera_fase == 3 ){
		printf("La siguiente parada es amarillo");
	}
	else
	printf("LA OPCION NO ES VALIDA");
}
