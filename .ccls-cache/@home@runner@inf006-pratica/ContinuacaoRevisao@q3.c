/*
Q3. Que entre com dados num vetor VET do tipo inteiro com 20 posiçoes, onde podem existir varios elementos repetidos. Gere um vetor VET1 que tambem será ordenado e terá somente os elementos do vetor VET que não sao repetidos.
*/

#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>



int main()
{
  int vet[20], vet1[20], i, j, k, ini, fim, meio;
  
  // srand(time(NULL));

  // printf("vet =");
  // for(i=0; i<20; vet[i]=rand()%20, printf(" %d", vet[i]), i++);

  printf("Declaração dos valores do vetor:");
  for(i=0; i<20; printf("\n%do elemento do vetor: ", i+1), scanf("%d", &vet[i]), i++);

  printf("\n\nvet =");
  for(i=0; i<20; printf(" %d", vet[i]), i++);

  vet1[0]=vet[0];

  for(i=1, j=0; i<20; i++)
  {
    
    if(vet1[j]==vet[i])
      continue;

    //Valor maior que o último adicionado ao vet1 até o momento
    else if(vet[i]>vet1[j])
    {
      j++;
      vet1[j]=vet[i];
    }

    //Valor menor que o menor valor adicionado ao vet1 até o momento
    else if(vet[i]<vet1[0])
    {
      j++;
      for(k=j; k>=0; vet1[k]=vet1[k-1], k--);
      vet1[0]=vet[i];
    }

    //Valor pode estar entre o menor e o maior do vet1 ou não. Verificado através da adaptação do método da bisseção
    else
    {
      ini=0;
      fim=j;
      
      while(ini<=fim)
      {
        meio=(ini+fim)/2;
        
        if(vet1[meio]==vet[i])
          break;

        else if(vet[i]<vet1[meio])
          fim=meio;
          
        else
        {
          if(ini==meio)
          {
            j++;
            for(k=j; k>meio+1; vet1[k]=vet1[k-1], k--);
            vet1[meio+1]=vet[i];
            break;
          }
          ini=meio;
        }
      }        
    }
  }

  printf("\n\nvet1 =");
  for(int n=0; n<j+1; printf(" %d", vet1[n]), n++);
  printf("\n\n");
  
  return 0;
}
