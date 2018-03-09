#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int numAlunos;
  int i;
  int *notas;   //ponteiro
  int maior_nota = 0;
  int menor_nota = 10;
  int media_nota = 0;
  printf ("Informe o numero de alunos: \n");
  scanf ("%i", &numAlunos);

  notas = malloc (numAlunos); //aloca espaço na memória

  for (i = 0; i<numAlunos; i++)
  {
    printf("Digite a nota do aluno %i (de 0 a 10) \n",i +1);

    scanf("%i",&notas[i]);

    if(notas[i] > maior_nota)
    {
        maior_nota = notas[i];
    }

    if(notas[i] < menor_nota)
    {
        menor_nota = notas[i];
    }

    media_nota += notas[i];    
  
  }
  
  media_nota/= numAlunos;
  
  printf("A media da turma foi: %i \n",media_nota);
  printf("A maior nota foi: %i\n",maior_nota);
  printf("A menor nota foi: %i\n",menor_nota);

  free(notas);  //libera o espaço alocado

}
