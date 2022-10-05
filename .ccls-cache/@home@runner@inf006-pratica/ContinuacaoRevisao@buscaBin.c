#include <stdio.h>

int buscabin(int v[], int tam, int chave)
{
  int ini=0;
  int fim = tam-1;
  int meio;

  while(ini<=fim)
  {
    meio = (ini+fim)/2;
    if(v[meio]==chave)
      return meio;
    if(v[meio]<chave)
      ini = meio+1;
    else
      fim = meio;
  }

  return -1;
}

int main()
{
  int chave, resp, i;
  int vet[20] = {1, 5, 6, 7, 8, 8, 8, 8, 9, 11, 11, 13, 13, 14, 14, 14, 18, 18, 19};

  printf("vet =");
  for(i=0; i<20; printf(" %d", vet[i]), i++);
  
  printf("valor a procurar: ");
  scanf("%d", &chave);

  resp=buscabin( vet, 20, chave);

  if(resp==-1)
    printf("Valor não encontrado!");
  else
    printf("O valor está na posição %d", resp);
  
  return 0;
}