# include <stdio.h>
# include <conio.h>

int x;
int y;
int r;

main(){
	
	x=5;
	y=10;
	r=x+y;
	printf("La suma de %d m%cs %d es %d\n",y,160,x,r);
	r=y-x;
	printf("La resta de %d menos %d es %d\n",y,x,r);
	r=x*y;
	printf("La multipliaci%cn de %d por %d es %d\n",162,y,x,r);
	r=y/x;
	printf("La divisi%cn de %d entre %d es %d\n",162,y,x,r);
	getche();
}
