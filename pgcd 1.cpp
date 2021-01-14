#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b;
	printf("entrer a :");
	scanf("%d", &a);
	printf("entrer b :");
	scanf("%d", &b);
 int	x=a, y=b;
	
	
	while(y!=x)
	if(x>y)
	x-=y;
	else
	y-=x;
printf("le PGCD de %d et %d est %d " ,a,b,x);


	
	
	
	
	
	
	
}
