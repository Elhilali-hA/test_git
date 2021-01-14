#include <stdio.h>
#include <math.h>
main()
{
 float N;
 do 
   {
    printf("Entrer un nombre (>= 0) : ");
    scanf("%f", &N);
   }
 while (N < 0); 
 printf("La racine carrée de %.2f est %.2f\n", N, sqrt(N));
 
} 

