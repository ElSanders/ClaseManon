# include <conio.h>
# include <stdio.h>

int x,y; 
float polines, alambre,costoPolines,costoAlambre, costoTotal;
	main(){
	printf("Introduce la distancia x: ");
	scanf("%d",&x);
	printf("Introduce la distancia y: ");
	scanf("%d",&y);	
	
	polines = (float(y)+float(x))*2/3;
	alambre = (x+y)*2;
	costoPolines = polines*55;
	costoAlambre =((x+y)*2)*3;
	costoTotal= costoAlambre+costoPolines;
	
	printf("**************************************************\n");
	printf("El n%cmero de polines que necesita es  :  %2f\n",163,polines);
	printf("Los metros de alambre que necesita son:  %2f\n",alambre);
	printf("El costo total de los polines es      : $%2f\n",costoPolines);	
	printf("El costo total del alambre es         : $%2f\n**************************************************\n",costoAlambre);	
	printf("El costo total de cercar es: $%8.2f\n**************************************************",costoTotal);
	getche();
}
