# include <conio.h>
# include <stdio.h>

int x,y,z,sum;

float prom;

	main(){
	printf("Introduce el primer valor: ");
	scanf("%d",&x);
	printf("Introduce segundo valor: ");
	scanf("%d",&y);	
	printf("Introduce tercer valor: ");
	scanf("%d",&z);	
	prom=(float(x)+float(y)+float(z))/3;
	sum=z+y+x;
	printf("****************************************\nLos valores ingresados son: %d, %d, %d\n",x,y,z);
	printf("La suma de sus valores es: %d\n",sum);
	printf("El promedio de sus valores es: %f\n****************************************",prom);	
	getche();
}

