// Luis Sandro González Solalinde
// A01365445

# include <conio.h>
# include <stdio.h>

int pri,fin;

main(){
	printf("Introduzca el primer valor de la serie entre 3 y 100: "); scanf("%d",&pri);
		while(pri<3 || pri>100)
	{
		printf("Error. Introduzca el primer valor de la serie entre 3 y 100: "); scanf("%d",&pri);
	}

	printf("Introduzca el valor final de la serie entre 3 y 100: "); scanf("%d",&fin);

	while(fin<3 || fin>100)
	{
		printf("Error. Introduzca el valor final de la serie entre 3 y 100: "); scanf("%d",&fin);
	}


	while(fin<pri){
		printf("Error. La serie no puede ser procesada, porque el valor final es mayor al primero.\n");
		printf("Vuelva a introducir el primer valor de la serie entre 3 y 100: "); scanf("%d",&pri);
		printf("Vuelva a introducir el valor final de la serie entre 3 y 100: "); scanf("%d",&fin);
	}
		int n=0;
			printf("Serie: ");
	while(pri<fin)
	{
	printf("%d, ",pri);
	n++;
	pri=pri+n;
	}
	getche();
}


