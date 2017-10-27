# include <stdio.h>
# include <conio.h>

float compra, porcentaje, pesos, total;

main(){
	
	printf("Indica el monto de la compra : "); scanf("%f",&compra);
	
	if (compra<10000) porcentaje=0;
	else{
	 if(compra>=10000) porcentaje=5;
	 else{
	 
	if (compra>=20000) porcentaje=10;
}
}
	pesos=(compra*porcentaje)/100;
	total=compra-pesos;
	
	printf("El total de la compra es      : $ %10.2f\n",compra);
	printf("El descuento en porcentaje es :   %10.2f %c\n",porcentaje,37);
	printf("El descuento en pesos es      : $ %10.2f\n\n",pesos);
	printf("El total a cobrar es          : $ %10.2f\n",total);

	getche();	
}
