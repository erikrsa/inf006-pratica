/*
Q6. Que leia e armazene os elemntos de uma matriz inteira (10,10) e imprima. depois troque os dados da segunda linha pela oitava. da quarta pela decima, a diagonal principal pela diagonal segundaria.
*/

#include<stdio.h>

int main()
{
  int i, j, matriz[10][10], aux;
  
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

  printf("\n\nGerando as trocas:");

  printf("\n2a linha <-> 8a linha:\n");
  for(j=0; j<10; aux=matriz[1][j], matriz[1][j]=matriz[7][j], matriz[7][j]=aux, j++);
  for(i=0; i<10; i++)
  {
    for(j=0; j<10; printf("\t%d", matriz[i][j]), j++);
    printf("\n");
  }

  printf("\n4a linha <-> 10a linha:\n");
  for(j=0; j<10; aux=matriz[3][j], matriz[3][j]=matriz[9][j], matriz[9][j]=aux, j++);
  for(i=0; i<10; i++)
  {
    for(j=0; j<10; printf("\t%d", matriz[i][j]), j++);
    printf("\n");
  }

  printf("\ndiagonal principal <-> diagonal secundaria:\n");
  for(i=0; i<10; aux=matriz[i][i], matriz[i][i]=matriz[i][10-1-i], matriz[i][10-1-i]=aux, i++);
  for(i=0; i<10; i++)
  {
    for(j=0; j<10; printf("\t%d", matriz[i][j]), j++);
    printf("\n");
  }
  
  return 0;
}