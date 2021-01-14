#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int a,b,produit,reste;
	
	printf("entrer la valeur de a :\n");
	scanf("%d", &a);
	printf("entrer la valeur de b :\n");
	scanf("%d", &b);
	
	
	produit = a * b;
	reste = a % b;
	
	
	while(reste != 0)
	{
	a = b;
	b = reste;
	reste = a % b;
	}
	

	
	printf("PGCD = %d ", b,produit/b);
		
		
	
	
	
}


