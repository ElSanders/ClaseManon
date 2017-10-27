# include <conio.h>
# include <stdio.h>

int x,c,cont=0,divi=0;

main(){

printf("Introduzca su valor entre 1 y 1000: "); scanf("%d",&x);

while(x<1 && x<1000){
	printf("Error, introduzca su valor entre 1 y 1000: "); scanf("%d",&x);
}
c=x-1;
	while(c>=2){
		if(x%c==0){
		cont++;}
		c--;
	}
	
	if(cont==0){
		printf("Su n%cmero es primo.",163);
	}else{
		printf("Su n%cmero no es primo.",163);
	}

	return 0;
}
