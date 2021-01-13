 #include<stdio.h>
 #include<math.h>
 
int main() {
 
    int a, b, c ; 
    float D;
    float S1, S2;

    printf("calcul des solution de l'equation \n");
    printf("de la forme de deuxieme degrés ax² + bx + c = 0 ");
    scanf("%i %i %i", &a,&b,&c);

    // printf("%i", a);
    
    // D = pow(b,2)-(4*a*c);
    D = (b * b)-(4*a*c);

    // printf("%f", D);

    if( D > 0) {
        S1=(-b-sqrt(D))/(2*a);
        S2=(-b+sqrt(D))/(2*a);
        printf("S1=%f and S2= %f\n",S1,S2);

    } else if (D == 0) {
        S1=(-b/(2*a));
        printf ("One solution : %f\n", S1);

    } else {
        printf("solution imaginaire");
    }

    return 0;
}
