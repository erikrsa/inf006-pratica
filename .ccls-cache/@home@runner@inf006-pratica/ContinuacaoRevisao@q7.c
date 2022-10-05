/*
Q7. Que declare uma matriz 5x5  e armazene em um vetor o maior elemento cadastrado em cada coluna da matriz, e em um vetor b o menor elemento cadastrado em cada coluna da matriz e imprima: 
a) toda a matrix;
b) o vetor a;
c) o vetor b;
d)(a+b)/2
*/

#include <stdio.h>

int main()
{
  int m[5][5], i, j, a[5], b[5];
  float media[5];
  
  //Declarando matriz
  printf("Declare os valores da Matriz (5x5):\n");
  for(i=0; i<5; i++)
  {
      for(j=0; j<5; printf("(%d,%d): ", i, j), scanf("%d", &m[i][j]), j++);
      printf("\n");
  }

  printf("Matriz =\n");
  for(i=0; i<5; i++)
  {
    for(j=0; j<5; printf("\t%d", m[i][j]), j++);
    printf("\n");
  }

  //Gerando vetor a
  for(j=0; j<5; j++)
  {
      for(i=0, a[j]=m[0][j]; i<5; i++)
      {
        if(m[i][j]>a[j])
          a[j]=m[i][j];
        }
  }
  printf("\n\nVetor a =");
  for(i=0; i<5; printf(" %d", a[i]), i++);

  
  //Gerando vetor b
  for(j=0; j<5; j++)
  {
      for(i=0, b[j]=m[0][j]; i<5; i++)
      {
        if(m[i][j]<b[j])
          b[j]=m[i][j];
        }
  }
  printf("\n\nVetor b =");
  for(i=0; i<5; printf(" %d", b[i]), i++);

  printf("\n\nVetor media =");
  for(i=0; i<5; media[i]=(a[i]+b[i])/2.0, printf(" %.1f", media[i]), i++);

  printf("\n\n");

  return 0;
}