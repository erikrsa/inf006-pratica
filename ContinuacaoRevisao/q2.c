/*
Q2. Que dado dois vetores de 10 posições, efetue operações basicas aritmeticas, indicadas por um terceiro vetor cujos dados tambem são fornecidos pelo usuario, gerando e imprimindo um quarto vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int i;
float a[10], b[10], resultado[10];
char operacao[10];

int main()
{
  
srand(time(NULL));

printf("a =");
for(i=0; i<10; a[i]=rand()%10, printf(" %f", a[i]), i++);

printf("\n\nb =");
for(i=0; i<10; b[i]=rand()%10, printf(" %f", b[i]), i++);

printf("\nInforme o vetor de operacoes: ");
for(i=0; i<10; printf("posicao %d: ", i), scanf("%c", &operacao[i]), getchar(), i++);

printf("\n\nSeu vetor de operacoes:");
for(i=0; i<10; printf(" %c", operacao[i]), i++);

printf("\n\na [operacoes] b =");

for(i=0; i<10; i++)
{
  switch (operacao[i])
  {
    case '+':
    resultado[i] = a[i]+b[i];
    break;
    
    case '-':
    resultado[i] = a[i]-b[i];
    break;
    
    case '*':
    resultado[i] = a[i]*b[i];
    break;

    case '/':
    resultado[i] = a[i]/b[i];
    break;
  }

  printf(" %f", resultado[i]);
}

printf("\n");

return 0;
}