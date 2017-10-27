# include <stdio.h>
# include <conio.h>

int x,y;

main( ){
	
	printf("Introduzca el primer valor: ");
	scanf("%d",&x);
	printf("Introduzca el segundo valor: ");
	scanf("%d",&y);
	
	if(x>y) printf("El primer valor es mayor que el segundo valor");
	else {
		if (x==y) printf("Los valores son iguales");
		else printf("El segundo valor es mayor que el primero");
	}
	getche();

}
