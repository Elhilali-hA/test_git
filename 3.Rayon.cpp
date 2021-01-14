#include<stdio.h>
#include<stdlib.h>

int main()
{
	float r,D,P,S;
	const float pi=3.14;
	printf("entrer le rayon :\n");
	scanf("%f", &r);
	D=2*r;
	printf("le diametre est %f \n", D);
	P=2*r*pi;
	printf("le perimetre est %f \n", P);
	S=pi*r*r;
	printf("la surface est %f \n", S);
	
	
	
}
