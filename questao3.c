#include <stdio.h>

int main () 
{
   int lado1, lado2, lado3;
   int s1, s2, s3; 

    printf ("Entre com o tamanho dos lados do triangulo: ");
    scanf ("%i %i %i", &lado1, &lado2, &lado3);

    /* Calcula o quadrado dos lados */

    s1 = lado1 * lado1;
    s2 = lado2 * lado2;
    s3 = lado3 * lado3;

    /* Testa a condição para um triângulo */

    if ( lado1 > 0 && lado2 > 0 && lado3 > 0)
    {
        if ((s1 == s2 + s3) || (s3 == s1 + s2) || (s2 == s1 + s3)) {
            printf ("E um triangulo retangulo \n");
        }
        else {
            printf ("Nao e um triangulo retangulo! \n");

        }
    }
     return 0;
}