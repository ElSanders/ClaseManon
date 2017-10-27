# include <conio.h>
# include <stdio.h>

float x,y,r;
int op;

main(){
	
	printf("Introduzca el primer valor  : "); scanf("%f",&x);
	printf("Introduzca el segundo valor : "); scanf("%f",&y);
	
	printf("\n\n1)Suma\n2)Resta\n3)Multiplicaci%cn\n4)Divisi%cn\nOpci%cn: ",162,162,162); scanf("%d",&op);
	if(op<1 || op>4){
		printf("Error en la selecci%cn de opciones",162);
		return 0;
	}else{
		if(op==1){
			r=x+y; 
			printf("Resultado de la suma es: %f",r);
			getche();
	}
	else{
		if(op==2){
			r=x-y;
			printf("Resultado de la resta es: %f",r);
			getche();
		} 
	else{
		if(op==3){
			r=x*y;
			printf("Resultado de la multiplicaci%cn es: %f",162,r);
			getche();
		}
	else{
		if(op==4){
			r=x/y;
			printf("Resultado de la divisi%cn es: %f",162,r);
			getche();
		}
	}
}}}}

