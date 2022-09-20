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
  int data=0, mes, dia;

  printf("Desenhando o mapa astral\n");

  while(data!=9999){
    printf("Informe a data <formato ddmm> ou digite 9999 para sair: ");
    scanf("%d", &data);

    if(data!=9999)
    {
      dia=data%100;
      mes=data/100;
      printf("mes=%d\ndia=%d\n", mes, dia);
    }

    printf("Seu numero: %d\n", data);
  }
  
}