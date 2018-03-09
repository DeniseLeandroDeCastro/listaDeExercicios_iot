#include <stdio.h>

int contaDigitos(int numero_inteiro)
{
    if( (numero_inteiro <= 9) && (numero_inteiro >= 0) )
    {
        return 1;
    }

    int contador = 1,quociente;
    quociente = numero_inteiro / 10;
    while(quociente != 0)
    {
        contador++;
        quociente /=10;
    }
    return contador;
}

int main(void)
{
  int numero_inteiro,quantidade_digitos;
  
  printf("Digite um numero inteiro positivo \n");
  scanf("%i",&numero_inteiro);
  quantidade_digitos = contaDigitos(numero_inteiro);
  printf("O numero digitado, possui %i digitos",quantidade_digitos);
  
}