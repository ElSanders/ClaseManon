# include <conio.h>
# include <stdio.h>
int x=0,c=0,n;

main(){
	printf("Introduzca el valor ");scanf("%d",&n);
	while(c<n)
	{
		c++;
		x++;
	printf("%d",x);
	while(n<9)
	{
		n--;
	if(x%n==0)
		{
			printf("This number is prime\n");
		}
		else
		{
			printf("This number is not prime\n");
		}
	}
	
	}
	return 0;
}
