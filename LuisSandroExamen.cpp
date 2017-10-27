# include <conio.h>
# include <stdio.h>

float v1,v2,v3,c1,c2,c3,tot,comtot;

main(){
	
	printf("Indique las ventas del vendedor 1: "); scanf("%f",&v1);
	printf("Indique las ventas del vendedor 2: "); scanf("%f",&v2);
	printf("Indique las ventas del vendedor 3: "); scanf("%f",&v3);
	
	printf("----------------------------------------------------\n");
	
	tot=v1+v2+v3;

	
 //vendedor 1
		if(v1>=0 && v1<=10000){
		c1 = 0;
	}else{ 
	
		if(v1>=10001 && v1<=50000){
		c1=.02;
		
	}else{
		
		if(v1>=50001 && v1<= 100000){
		c1=.03;
		}else{
		if(v1>=100001){
			c1=.04;
		}}}} 
	printf("Porcentaje de comisi%cn del vendedor 1:  %f\n",162,c1*100);
	printf("Comisi%cn del vendedor 1 en pesos     : $%f\n",162, c1*v1);	
		printf("-----------------------------------------------------\n");
	
	 //vendedor 2
		if(v2>=0 && v2<=10000){
		c2 = 0;
	}else{ 
	
		if(v2>=10001 && v2<=50000){
		c2=.02;
		
	}else{
		
		if(v2>=50001 && v2<= 100000){
		c2=.03;
		}else{
		if(v2>=100001){
			c2=.04;
		}}}} 
	printf("Porcentaje de comisi%cn del vendedor 2:  %f\n",162,c2*100);
	printf("Comisi%cn del vendedor 2 en pesos     : $%f\n",162, c2*v2);
	printf("-----------------------------------------------------\n");
	
	 //vendedor 3
		if(v3>=0 && v3<=10000){
		c3 = 0;
	}else{ 
	
		if(v3>=10001 && v3<=50000){
		c3=.02;
		
	}else{
		
		if(v3>=50001 && v3<= 100000){
		c3=.03;
		}else{
		if(v3>=100001){
			c3=.04;
		}}}} 
	printf("Porcentaje de comisi%cn del vendedor 3:  %f\n",162,c3*100);
	printf("Comisi%cn del vendedor 3 en pesos     : $%f\n",162, c3*v3);
	printf("-----------------------------------------------------\n");
	

comtot = c1*v1+c2*v2+c3*v3;

	printf("Total de ventas                      : $%f\n",tot);
	printf("Total de comisiones                  : $%f\n",comtot);
		printf("-----------------------------------------------------\n");
	
	printf("Vendedor que m%cs vendi%c              : ",160,162);
	
	if(v3>v2 && v3>v1){
		printf("El vendedor 3\n");
	} else{ if(v2>v1 && v2>v3){
		printf("El vendedor 2\n");
	}else{ if (v1>v2 && v1>v3){
		printf("El vendedor 1\n");
	}
	} 
	}
			printf("-----------------------------------------------------\n");

	
	getche();
}
