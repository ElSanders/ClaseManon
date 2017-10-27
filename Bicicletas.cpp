# include <conio.h>
# include <stdio.h>

float bicla, llanta, freno, marco, asiento, total, porcentaje, precio;

main(){
	
	printf("Indique la cantidad de bicicletas:  "); scanf("%f",&bicla);
	bicla = bicla*1200;
	printf("Indique la cantidad de llantas   :  "); scanf("%f",&llanta);
	llanta = llanta*250;
	printf("Indique la cantidad de frenos    :  "); scanf("%f",&freno);
	freno = freno*150;
	printf("Indique la cantidad de marcos    :  "); scanf("%f",&marco);
	marco = marco*600;
	printf("Indique la cantidad de asientos  :  "); scanf("%f",&asiento);	
	asiento = asiento*200;
	printf("************************************ \n");
	total = bicla+llanta+freno+marco+asiento;
	printf("La venta total es de             :  $%f \n",total);
		printf("************************************ \n");

	
	if(total>=1000 && total<=3000){
		porcentaje = .10;
	} else {
				porcentaje = 0;
			
		if( total>=3001 && total<=5999){
			porcentaje = .15;
		} else {
			if(total>=6000){
				porcentaje = .20;
			}
			
		}
	}
	
	printf("El porcentaje de descuento es de :  %f\% \n",porcentaje*100);
	printf("El descuento en pesos es de      :  $%f\n", (total*porcentaje));
		printf("************************************ \n");
	printf("Total a cobrar es                :  $%f", total*(1-porcentaje));	
	
	
	getche();
	
	
}
