/*
Q5.  Que leia os elemntos de uma matrix 10x10 e mostre somente os elementos abaixo da diagonal;
*/

//Importante: considerando a diagona principal exclusa

#include <stdio.h>

int main()
{
  int i, j, matriz[10][10];
  

  printf("Informe os elementos da matriz:");
  for(i=0; i<10; i++)
  {
    for(j=0; j<10; printf("\t(%d, %d)", i, j), scanf("%d", &matriz[i][j]), j++);
  }
  
  printf("Imprimindo a matriz...\n");
  printf("Matriz =\n");
  for(i=0; i<10; i++)
  {
    for(j=0; j<10; printf("\t%d", matriz[i][j]), j++);
    printf("\n");
  }

  printf("\n\nElementos abaixo da diagonal =\n");
  for(i=0; i<10; i++)
  {
    for(j=0; j<10; j++)
    {
      if(j>=i)
        break;
      printf("\t%d", matriz[i][j]);        
    }
    printf("\n");
  }

  return 0;
}