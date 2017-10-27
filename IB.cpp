# include <stdio.h>
# include <conio.h>
char nom[50];
int x,cal;

main( ){
	
	printf("Introduzca su nombre: "); scanf("%s",&nom);
	printf("Hola %s, estudiaste el Bachillerato Internacional? Escribe 1 si s%c, escribe algo m%cs si no ",nom,161,160); scanf("%d",&x);
	if (x!=1){
	printf("No rifas Mijo");
	return 0;
}
	else printf("Excelente! Qu%c punage obtuviste? ",130); scanf("%d",&cal);
	if (cal<24) printf("No rifas, mijo");
	else printf("Eres rifado, mijo.");
	return 0;

	getche();

}
