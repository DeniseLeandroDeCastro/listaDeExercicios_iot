#include <stdio.h>

int main () 
{
    int num1;
    int num2;
    int i;

    printf ("Informe o primeiro numero: ");
    scanf ("%d", &num1);

    printf ("Informe o segundo numero: ");
    scanf ("%d", &num2);

    for (i=num1; i<=num2; i++)
    {
        if ((i%2)==0) {
            if ((i%3)==0) {
                printf ("%d\n", i);
            }
        }
    }
    return 0;
}