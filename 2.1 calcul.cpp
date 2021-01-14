#include <stdio.h>


int main()
{

    int a,b;
    float result;
    char operation;




    printf("Entrer la valeur du nombre A :");
    scanf("%d",&a);


 printf("choisissez une operation :");
    scanf(" %c", &operation);


    printf("Entrer la valeur du nombre B :" );
    scanf("%d",&b);

   





    switch(operation)
    {

        case '+':
            result = a + b;
            printf("Les resultat est :%f",result);
            break;
        case '-':
            result = a - b;
            printf("Les resultat est :%f",result);
            break;
        case '*':
            result = a * b;
            printf("Les resultat est :%f",result);
            break;

        case '/':
            result = (float)a/(float)b;
            printf("Les resultat est :%f",result);
            break;
        default :
            printf("L'operation que vous avez entree est invalide !!!");
    }

    return 0;
}
