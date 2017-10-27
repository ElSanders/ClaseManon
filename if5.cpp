# include <conio.h>
# include <stdio.h>

int pri,seg;

main(){
	printf("Introduzca un valor par entero entre 1 y 1000    : "); scanf("%d",&pri);
	if(pri>=1 && pri<=1000 && pri %2==0){
	printf("Introduzca un segundo valor impar entre 1 y 1000 :"); scanf("%d",&seg);
		if (seg>=1 && seg<=1000 && seg %2 !=0){
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
