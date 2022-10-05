/*
Q3. Que entre com dados num vetor VET do tipo inteiro com 20 posiçoes, onde podem existir varios elementos repetidos. Gere um vetor VET1 que tambem será ordenado e terá somente os elementos do vetor VET que não sao repetidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
  int vet[20], vet1[20], i, j, k, ini, fim, aux, valor, meio, w, parou;
  
  srand(time(NULL));

  printf("vet =");
  for(i=0; i<20; vet[i]=rand()%20, printf(" %d", vet[i]), i++);

  vet1[0]=vet[0];

  for(i=1, j=0; i<20; i++)
  {
    printf("\nLoop %d", i);
    printf("\n\nvet1 =");
    for(int n=0; n<j+1; printf(" %d", vet1[n]), n++);
    printf("\n\n");
    
    if(vet1[j]==vet[i])
      continue;

    //ok
    else if(vet[i]>vet1[j])
    {
      j++;
      vet1[j]=vet[i];
    }

    //ok
    else if(vet[i]<vet1[0])
    {
      j++;
      for(k=j; k>=0; vet1[k]=vet1[k-1], k--);
      vet1[0]=vet[i];
    }

    else
    {
      ini=0;
      fim=j;
      parou=0;
      w=0;
      
      while(ini<=fim && parou==0)
      {
        meio=(ini+fim)/2;

        //teste de mesa
        getchar();
        printf("\n\nWhile %d\n", w);
        printf("\nini=%d\nfim=%d\nmeio = %d", ini, fim, meio);
        printf("\nvet1[meio]=%d\nvet[i]=%d", vet1[meio], vet[i]);
        
        if(vet1[meio]==vet[i])
          break;

        else if(vet[i]<vet1[meio])
        {
          // if((meio-ini)==1)
          // {
          //   j++;
          //   for(k=j; k>meio; vet1[k]=vet1[k-1], k--);
          //   vet1[meio]=vet[i];
          //   parou=1;
          // }
          // else
          fim=meio;
        }
          
        else
        {
          // if((fim-meio)==1)
          // {
          //   j++;
          //   for(k=j; k>meio+1; vet1[k]=vet1[k-1], k--);
          //   vet1[meio+1]=vet[i];
          //   parou=1;
          // }
          // else
          if(ini==meio)
          {
            j++;
            for(k=j; k>meio+1; vet1[k]=vet1[k-1], k--);
            vet1[meio+1]=vet[i];
            break;
          }
          ini=meio;
        }
        w++;
      }        
    }
  }

  printf("\nFINAL");
  printf("\n\nvet1 =");
  for(int n=0; n<j+1; printf(" %d", vet1[n]), n++);
  printf("\n\n");

  //ordenação buble sort

  // for(i=1; i<20; i++)
  // {
  //   for(j=0; j<20-i; j++)
  //   {
  //     if(vet[j]>vet[j+1])
  //     {
  //       aux=vet[j+1];
  //       vet[j+1]=vet[j];
  //       vet[j]=aux;
  //     }
  //   }
  // }

  // printf("\n\nPós-ordenação");
  // printf("\nvet =");
  // for(i=0; i<20; printf(" %d", vet[i]), i++);
  // printf("\n\nQual valor deseja procurar? ");
  // scanf("%d", &valor);
  
  // ini = 0;
  // fim = 19;

  // if(valor<vet[ini]&&valor>vet[fim])
  //   printf("Valor fora do intervalo do vetor!");

  // else if(valor==vet[ini])
  //   printf("Valor está na posição 0 do vetor!\n\n");

  // else if(valor==vet[fim])
  //   printf("Valor está na posição 19 do vetor!\n\n");
  
  // //método da bisseção

  // else
  // {
  //   while(ini<=fim)
  //   {
  //     meio = (ini+fim)/2;
  //     printf("\nvet[%d] = %d\n", meio, vet[meio]);
  
  //     if(valor<vet[meio])
  //       fim=meio-1;
  //     else if(valor>vet[meio])
  //       ini=meio+1;
  //     else
  //       posicao=meio;
  //       break;
  //   }

  //   if(posicao==-1)
  //     printf("Valor não encontrado!\n\n");
  //   else
  //     printf("Valor encontrado na posição %d\n\n", posicao);
  // }
  

  

  
  // vet1[ini] = vet[0];
  // vet1[fim] = vet[0];
  // for(i=0, j=0; i<20; i++)
  // {
  //   if(vet[i]<vet1[ini])
  //   {
  //     j++;
  //     for
  //   }
      
  // }
  
  return 0;
}
