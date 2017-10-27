# include <conio.h>
# include <stdio.h>
int x,y;
main(){
		printf("Introduzca el vaor de x: "); scanf("%d",&x);
if(x<1 || x>10){
			printf("Error, no entra en el rango establecido");
			x=x-x;
			printf("Introduzca el vaor de x: "); scanf("%d",&x);}
	while(x>=1 && x<=10){
			printf("Introduzca el valor de y: "); scanf("%d",&y);
			if(x<1 || x>10){
			printf("Error, no entra en el rango establecido");
			x=x-x;
			printf("Introduzca el vaor de x: "); scanf("%d",&x);}
	}
	printf("Los valores indicados son: %d y %d",x,y);
}
