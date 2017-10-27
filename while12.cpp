# include <conio.h>
# include <stdio.h>

int x,y,r;

main(){

printf("Introduzca su valor entre 1 y 1000: "); scanf("%d",&x);

while(x<1 && x<1000){
	printf("Error.");
	printf("Introduzca su valor entre 1 y 1000: "); scanf("%d",&x);
}
printf("Introduzca su valor entre 1 y 1000: "); scanf("%d",&y);
while(y<1 && y<1000){
	printf("Error.");
	printf("Introduzca su valor entre 1 y 1000: "); scanf("%d",&y);
}


r=y;
while(r>x && r<y){
		if(x%r!=0){
		}else{
			printf("%d, ",r);
		}
		r--;

	}
	

	return 0;
}
