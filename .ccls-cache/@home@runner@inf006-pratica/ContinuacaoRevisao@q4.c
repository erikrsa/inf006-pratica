/*
Q4. Que armazene 10 numeros em um vetor. Na entrada de dados, o numero ja deve ser armazenado na sua posição definitiva em ordem decrescente. imprimir o vetor logo apos a entrada de dados;
*/

#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>


int main()
{
  int i, vet[10], valor, ini=0, fim=0, meio, k;

  // srand(time(NULL));

  printf("\n\nInforme o valor 1: ");
  scanf("%d", &vet[0]);
  // vet[0]=rand()%50;
  // printf("\nValor 1: %d", vet[0]);

  
  printf("\nvet =");
  for(k=0; k<=i; printf(" %d", vet[k]), k++);

  for(i=1, ini=0, fim=0; i<10; i++)
  {
    printf("\n\nInforme o valor %d: ", i+1);
    scanf("%d", &valor);
    // valor=rand()%50;
    // printf("\n\nValor %d: %d", i+1, valor);

    if(valor<vet[i-1])
      vet[i]=valor;

    else if(valor>=vet[0])
    {
      for(k=i; k>0; vet[k]=vet[k-1], k--);
      vet[0]=valor;
    }

    //Valor pode estar entre o menor e o maior do vet1 ou não. Verificado através da adaptação do método da bisseção
    else
    {
      ini=0;
      fim=i-1;
      
      while(ini<=fim)
      {
        meio=(ini+fim)/2;
        
        if(vet[meio]==valor)
          {
            for(k=i; k>meio+1; vet[k]=vet[k-1], k--);
            vet[meio+1]=valor;
            break;
          }

        else if(valor<vet[meio])
        {
          if(ini==meio)
          {
            for(k=i; k>meio+1; vet[k]=vet[k-1], k--);
            vet[meio+1]=valor;
            break;
          }
          ini=meio;
        }
        else
          fim=meio;
      }        
    }
    
    printf("\nvet =");
    for(k=0; k<=i; printf(" %d", vet[k]), k++);
  }
  printf("\n\n");
  return 0;
}