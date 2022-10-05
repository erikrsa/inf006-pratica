/*
Q8. Que deixe entrar com valores de uma matriz de ordem cinco e verificar se ela é ou nao uma matriz triangular superior.

P.S. Matriz triangular superior é uma matriz onde todos elementos de posições L<C são diferentes de 0 e todos os elementos de L>C são iguais a 0.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
  int m[5][5], i, j, triangular, opcao;

  srand(time(NULL));
  
  // Declarando matriz
  printf("Declare os valores da Matriz (5x5):\n");
  for(i=0; i<5; i++)
  {
      for(j=0; j<5; printf("(%d,%d): ", i, j), scanf("%d", &m[i][j]), j++);
  }

  //GERAÇÃO DE MATRIZ DE FORMA ESPONTÂNEA
  /*
  printf("Digite 1 para gerar uma matriz triangular ou qualquer outro valor para gerar uma matriz qualuqer: ");
  scanf("%d", &opcao);

  //Gerando uma matriz triangular superior
  if(opcao==1)
  {
    for(i=0; i<5; i++)
    {    
      for(j=0; j<5; j++)
      {
        if(i<j)
          m[i][j]=1+rand()%25;
        else if(i>j)
          m[i][j]=0;
        else
          m[i][j]=rand()%25;
      }
    }
  }

  else
  {
    for(i=0; i<5; i++)
    {
      for(j=0; j<5; m[i][j]=rand()%25, j++);
    }
  }
  */
  
  printf("\n\nMatriz =\n");
  for(i=0; i<5; i++)
  {
    for(j=0; j<5; printf("\t%d", m[i][j]), j++);
    printf("\n");
  }

  for(i=0, triangular=1; i<5 && triangular==1; i++)
  {
    for(j=0; j<5; j++)
    {
      if((i<j && m[i][j]==0) || (i>j && m[i][j]!=0))
       triangular = 0;
    }
  }

  if(triangular==1)
    printf("\nA matriz declarada eh triangular!\n\n");
  else
    printf("\nA matriz declarada nao eh triangular...\n\n");
}