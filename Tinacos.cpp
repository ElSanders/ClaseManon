# include <stdio.h>
# include <conio.h>

int tipoA, tipoB, tipoC, metros, flotadores, costoFab, ventaTotal, profit;
int costoA = 25; int precioA = 760; int metrosA =10;
int costoB = 35; int precioB = 1130; int metrosB = 15;
int costoC = 45; int precioC = 1490; int metrosC = 20;
main()
{
	printf("Introduzca la cantidad de tinacos tipo A : "); 
	scanf("%d",&tipoA);
	printf("Introduzca la cantidad de tinacos tipo B : "); 
	scanf("%d",&tipoB);
	printf("Introduzca la cantidad de tinacos tipo C : "); 
	scanf("%d",&tipoC);
	
	metros = ((tipoA*metrosA)+(tipoB*metrosB)+(tipoC*metrosC));
	flotadores = tipoA+tipoB+tipoC;
	costoFab = ((tipoA*costoA)+(tipoB*costoB)+(tipoC*costoC));
	ventaTotal = ((tipoA*precioA)+(tipoB*precioB)+(tipoC*precioC));
	profit = ventaTotal-costoFab;
	
	printf("\nMetros cuadrados de pl%cstico  : %d \n",160,metros);
	printf("Cantidad de flotadores        : %d\n",flotadores);
	printf("Tapas de 1 metro           : %d\n",tipoA);
	printf("Tapas de 1.5 metros           : %d\n",tipoB);
	printf("Tapas de 2 metros           : %d\n",tipoC);
	printf("Costo  de fabricaci%cn    : $%d\n",162,costoFab);
	printf("Venta total                   : $d\n",ventaTotal);
	printf("Utilidad de la venta           : $%d\n",profit);
	getche();
}
