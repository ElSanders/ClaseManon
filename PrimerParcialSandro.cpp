// Luis Sandro González Solalinde
// A01365445

# include <conio.h>
# include <stdio.h>

int x;
main(){
	
		printf("Introduzca un valor entre 1 y 100: "); scanf("%d",&x);
		while(x<1 || x>100)
	{
		printf("Error. Introduzca el primer valor de la serie entre 1 y 100: "); scanf("%d",&x);
	}

int n=0,i=1,c,s;
printf("Serie: ");

while(n<=x){
printf("%d, ",n);
c=n;	
n=c+i;
i=c;
s++;
}

int nn=0,ii=1,cc,q=0,sum;

while(q<s){
	cc=nn;
	nn=cc+ii;
	ii=cc;
	sum=nn+cc;
	q++;
}
sum=sum-1;

printf("\nSumatoria: %d",sum);

getche();
}
