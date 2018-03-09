#include <stdio.h>

int main ()
{
    int vetor_binario[] = {0,0,0,0,0,0,0,0};
    int i, j = 7, numero_inteiro, quociente, modulo;
    printf ("Digite um numero inteiro de 0 a 255: \n");
    scanf ("%i", &numero_inteiro);
    quociente = numero_inteiro/2;
    modulo = numero_inteiro %2;
    vetor_binario [j--] = modulo;

    while (quociente >0)
    {
        modulo = quociente %2;
        vetor_binario[j--] = modulo;
        quociente/=2;
    }

    printf ("O numero %i em binario e: \n", numero_inteiro);

    for (i=0; i<8; i++)
    {
        printf ("%i", vetor_binario[i]);
    }
    printf ("\n");

    return 0;
}