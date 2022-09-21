/*
Q3. Que entre com dados num vetor VET do tipo inteiro com 20 posiçoes, onde podem existir varios elementos repetidos. Gere um vetor VET1 que tambem será ordenado e terá somente os elementos do vetor VET que não sao repetidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int vet[20], vet1[20], i;

  printf("vet =");
  for(i=0; i<20; vet[i]=rand()%20, printf(" %d", vet[i]), i++);
  
  return 0;
}
