#include <stdio.h>

int questao01()
{
/*
Q1. Na usina de Angra dos Reis, os técnicos analisam a perda de massa de um
material radioativo. Sabendo-se que este perde 25% de sua massa a cada
30 segundos, criar um programa que imprima o tempo necessário para que a
massa deste material se torne menor que 0,10 gramas. O programa pode
calcular o tempo para varias massas.
*/
  int t;
  float m;

  printf("Informe a massa do material radioativo em gramas: ");
  scanf("%f", &m);

  for(t=0, m; m>0.1; t+=30, m*=0.75);

  printf("Em %d segundos a massa radioativa será inferior a 0,10 gramas", t);

  return 0;
}

int questao02()
{
/*
Q2. Entrar com a idade de varias pessoas ate o usuário informar que deseja
parar e imprimir o total de pessoas com menos de 21 e total de pessoas
maiores que 50
*/
  int lim=10, i, idade[lim];

  for(idade[0]=0, i=0; i<lim && (idade[i-1]>0||i==0); printf("Informe a %d idade (-1 para parar): ", i+1), scanf("%d", &idade[i]), i++);
  printf()  
}

int main(void) {
  questao01();
  return 0;
}