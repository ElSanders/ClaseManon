# include <conio.h>
# include <stdio.h>

int num,den,tot,res;

main(){
	
	printf("Introduce el numerador: "); scanf("%d",&num);
	printf("Introduce el denominador: "); scanf("%d",&den);
	
	tot=num/den;
	res = (num%den);
	printf("El resultado de la divisi%cn es: %d  con residuo de: %d",162,tot,res);
	getche();
}
