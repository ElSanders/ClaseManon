# include <conio.h>
# include <stdio.h>

int pri,seg;

main(){
	printf("Introduzca un valor entero entre 1 y 100      : "); scanf("%d",&pri);
	if(pri>=1 && pri<=100){
		printf("Introduzca el segundo valor entre 1 y 100 :"); scanf("%d",&seg);
		if (seg>=1 && seg<=100){
			printf("Los valores introducidos son correctos y son %d y %d",pri,seg);
			getche();
		}else{
		printf("Error, el valor no entra en el rango establecido, joven");
		return 0;
	}
	
	} else{
		printf("Error, el valor no entra en el rango establecido, joven");
		return 0;
	}
	
	
}
