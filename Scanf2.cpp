# include <conio.h>
# include <stdio.h>

int x,y;
float r;

	main(){
	printf("Introduce el numerador: ");
	scanf("%d",&x);
	printf("Introduce denominador: ");
	scanf("%d",&y);	
	
	r=float(x)/float(y);
	printf("El resultado de su divisi%cn es: %f",162,r);	
	getche();
}

