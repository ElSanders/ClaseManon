# include <conio.h>
# include <stdio.h>
# include <iostream>
int pri, seg, ter, cua, qui;
float prom;
main(){
	printf("Indique el primer valor  :  "); scanf("%d",&pri);
	printf("Indique el segundo valor :  "); scanf("%d",&seg);
	printf("Indique el tercer valor  :  "); scanf("%d",&ter);
	printf("Indique el cuarto valor  :  "); scanf("%d",&cua);
	printf("Indique el quinto valor  :  "); scanf("%d",&qui);
	prom = ((float)pri+(float)seg+(float)ter+(float)cua+(float)qui)/5;
	printf("*************************************\n");
	printf("El promedio de los valores es: %f\n",prom);
	printf("*************************************\n");
	if(pri>seg && pri>ter && pri>cua && pri>qui){
		printf("El valor m%cs alto es: %d\n", 160,pri);}
	else if(seg>pri && seg>ter && seg>cua && seg>qui){
		printf("El valor m%cs alto es: %d\n", 160,seg);}
	else if(ter>pri && seg>ter && ter>cua && ter>qui){
		printf("El valor m%cs alto es: %d\n", 160,ter);}	
	else if(cua>pri && cua>ter && cua>seg && cua>qui){
		printf("El valor m%cs alto es: %d\n",160, cua);}
	else if(qui>pri && qui>ter && qui>cua && qui>seg){
		printf("El valor m%cs alto es: %d\n",160, qui);}
	if(pri<seg && pri<ter && pri<cua && pri<qui){
		printf("El valor menos alto es: %d\n", pri);}
	else if(seg<pri && seg<ter && seg<cua && seg<qui){
		printf("El valor menos alto es: %d\n", seg);}
	else if(ter<pri && seg<ter && ter<cua && ter<qui){
		printf("El valor menos alto es: %d\n", ter);}	
	else if(cua<pri && cua<ter && seg<cua && seg<qui){
		printf("El valor menos alto es: %d\n", cua);}
	else if(qui<pri && qui<ter && qui<cua && qui<seg){
		printf("El valor menos alto es: %d\n", qui);}
		printf("*************************************\n");
	if (pri % 2 ==0){
		printf("El primer valor es par\n");
	} else { printf("El primer valor es impar\n");}

	if (seg % 2 ==0){
		printf("El segundo valor es par\n");
	} else { printf("El segundo valor es impar\n");}
	
		if (ter % 2 ==0){
		printf("El tercer valor es par\n");
	} else { printf("El tercer valor es impar\n");}
	
		if (cua % 2 ==0){
		printf("El cuarto valor es par\n");
	} else { printf("El cuarto valor es impar\n");}
	
		if (qui % 2 ==0){
		printf("El quinto valor es par\n");
	} else { printf("El quinto valor es impar\n");}	
	printf("*************************************\n");
getche();	
}
