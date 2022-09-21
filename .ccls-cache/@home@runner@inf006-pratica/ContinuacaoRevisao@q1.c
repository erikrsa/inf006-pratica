/*
1) Que imprima o horóscopo de varias pessoas, a aprtir da sua data de nascimento (ddmm). O fim é determinado quando se digita 9999 para data. considera que a data foi digitada corretamente.

01-20 Capricornio
02-19 Aquario
03-20 Peixes
04-20 Aries
05-20 Touro
06-20 Gemeos
07-21 Cancer
08-22 Leão
09-22 Virgem
10-22 Libra
11-21 Escorpião
12-21   Sargitario
*/

#include <stdio.h>

main()
{
  int entrada=0, mes, dia, data;

  printf("Desenhando o mapa astral\n");

  while(entrada!=9999){
    printf("Informe a data <formato ddmm> ou digite 9999 para sair: ");
    scanf("%d", &entrada);

    if(entrada!=9999)
    {
      mes=entrada%100;
      dia=entrada/100;

      data=mes*100+dia;
      
      printf("mes=%d\ndia=%d\ndata=%d\n\n", mes, dia, data);

      if((data<=120 && data>=101) || (data>=2212 && data<=3112))
        printf("Seu signo eh de capricorno!");
        
      else if(data<=219)
        printf("Seu signo eh de aquario!");

      else if(data<=320)
        printf("Seu signo eh de peixes!");

      else if(data<=420)
        printf("Seu signo eh de aries!");

      else if(data<=520)
        printf("Seu signo eh de touro!");

      else if(data<=620)
        printf("Seu signo eh de gemeos!");

      else if(data<=721)
        printf("Seu signo eh de cancer!");

      else if(data<=822)
        printf("Seu signo eh de leao!");

      else if(data<=922)
        printf("Seu signo eh de virgem!");

      else if(data<=1022)
        printf("Seu signo eh de libra!");

      else if(data<=1121)
        printf("Seu signo eh de escorpiao!");

      else if(data<=1221)
        printf("Seu signo eh de sargitario!");

      else
        printf("Signo nao identificado. Favor, consultar o astrologo!\n\n");
    }
    printf("\n\n");
  }

  printf("Encerrando o programa...\n");
  
}