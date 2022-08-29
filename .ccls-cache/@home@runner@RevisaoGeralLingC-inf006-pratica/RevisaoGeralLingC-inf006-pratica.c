// #include <stdio.h>
// #include <string.h>
// #include <time.h>
// #include <stdlib.h>

// int questao01()
// {
// /*
// Q1. Na usina de Angra dos Reis, os técnicos analisam a perda de massa de um
// material radioativo. Sabendo-se que este perde 25% de sua massa a cada
// 30 segundos, criar um programa que imprima o tempo necessário para que a
// massa deste material se torne menor que 0,10 gramas. O programa pode
// calcular o tempo para varias massas.
// */
//   int t;
//   float m;

//   printf("Informe a massa do material radioativo em gramas: ");
//   scanf("%f", &m);

//   for(t=0, m; m>0.1; t+=30, m*=0.75);

//   printf("Em %d segundos a massa radioativa será inferior a 0,10 gramas", t);

//   return 0;
// }

// int questao02()
// {
// /*
// Q2. Entrar com a idade de varias pessoas ate o usuário informar que deseja
// parar e imprimir o total de pessoas com menos de 21 e total de pessoas
// maiores que 50
// */
//   int menor21=0, maior50=0, idade=0;

//   do{
//     printf("Informe a idade da pessoa (informe -1 ou menor para sair): ");
//     scanf("%d", &idade);

//     if(idade<21)//poderia colocar && idade>=0, mas aí seria mais um teste a fazer em cada loop, é preferível subtrair um, sabendo que o primeiro número menor que 0 que fará a leitura de idades parar
//       menor21++;
//     else if(idade>50)
//       maior50++;
//   }while(idade>=0);

//   printf("\nRESULTADO\nPessoas com idade inferior a 21: %d\nPessoas com idade superior a 50: %d", menor21-1, maior50);

//   return 0;
// }

// int questao03()
// {
// /* VERIFICAR
// Q3. Dado um pais A, com 5.000.000 de habitantes e uma taxa de natalidade de
// 3% ao ano, e um pais B com 7.000.000 de habitantes e uma taxa de
// natalidade de 2% ao ano. calcular e imprimir o tempo necessário para que
// a população do pais A ultrapasse a população do pais B
// */
//   float A, B;
//   int ano;

//   for(ano=0, A=5.0, B=7.0; A<=B; A*=1.03, B*=1.02, ano++);

//   printf("O país A terá população superior ao país B após %d anos", ano);
  
//   return 0;
// }

// int questao04()
// {
// /*
// Q4. Chico tem 1.50m e cresce 2 centímetros por ano, enquanto Juca tem 1.10m e
// cresce 3 cm por ano. construir um programa que calcule e imprima
// quantos anos serão necessários para Juca seja maior que Chico;
// */
//   int chico, juca, ano;

//   for(chico=150, juca=110, ano=0; juca<=chico;  ano++,chico+=2, juca+=3);

//   printf("Serão necessários %d anos para que Juca seja maior que Chico.", ano);
  
//   return 0;
// }

// int questao05()
// {
// /* testar melhor
// Q5. Criar um programa que deixe entrar com nome e idade de 20 pessoas e
// armazene em um vetor todos os nomes que comecem com a letra no
// intervalo L-S
// */

//   int idade, i, j, k;
//   char nome[256], pessoas[20][256];

//   for(i=0, k=0; i<20; i++)
//   {
//     printf("\nInforme o nome da %dª pessoa: ", i+1);
//     fgets(nome, 256, stdin);

//     for(j=0; nome[j]!='\n'; j++);
//     nome[j]='\0';
    
//     printf("Informe a idade de %s: ", nome);
//     scanf("%d", &idade);
//     getchar();
    
//     if((nome[0]>='L' && nome[0]<='S') || (nome[0]>='l' && nome[0]<='s'))
//     {
//       strcpy (pessoas[k], nome); /* Copia nome em pessoas[k] */
//       k++;
//     }
//   }

//   printf("Pessoas declaradas com nome que começam com a letra entre L e S");
//   for(i=0; i<k; printf("\n%s", pessoas[i]), i++);
// }

// int questao06()
// {
// /*
// Q6. Armazenar nomes e nota 1, 2, de 15 alunos. calcular e armazenar a media. armazenar tambem a situação do aluno: AP ou RP. imprimir uma listagem contendo nome, notas, media e a situação de cada aluno.
// */

//   struct boletim_dos_alunos
//   {
//     char nome[256], situacao[3];
//     float nota1, nota2, media;
//   }alunos[15];

//   printf("===== CADASTRO =====\n");
//   for(int i=0; i<15; i++)
//   {
//     printf("\n----- %dº Estudante -----\n", i+1);
//     printf("Nome: ");
//     fgets(alunos[i].nome, 256, stdin);

//     int j;
//     for(j=0; alunos[i].nome[j]!='\n'; j++);
//     alunos[i].nome[j]='\0';

//     printf("1ª nota: ");
//     scanf("%f", &alunos[i].nota1);

//     printf("2ª nota: ");
//     scanf("%f", &alunos[i].nota2);
//     getchar();

//     alunos[i].media = (alunos[i].nota1+alunos[i].nota2)/2.0;

//     if(alunos[i].media<5)
//       strcpy(alunos[i].situacao,"RP");
//     else
//       strcpy(alunos[i].situacao,"AP");
//   }

//   printf("\n\n===== RESULTADO =====\n");
//   for(int i=0; i<15; i++)
//   {
//     printf("\n\n----- %dº Estudante -----", i+1);
//     printf("\nNome: %s", alunos[i].nome);
//     printf("\n1ª nota: %.2f", alunos[i].nota1);
//     printf("\n2ª nota: %.2f", alunos[i].nota2);
//     printf("\nMedia: %.2f", alunos[i].media);
//     printf("\nSituacao: %s", alunos[i].situacao);
//   }
//   return 0;
// }

// int questao07()
// {
// /*
// Q7. Criar programa que leia dois conjuntos de números inteiros, tendo cada um 10 e 20 elementos e apresente os elementos comuns aos conjuntos.lembre-se de que os elementos podem se repetir mas não podem aparecer repetidos na saída
// */
//   int A[10], B[20], repetido[10], i, j, k;

//   srand(time(NULL));

//   printf("Gerando os conjuntos:\n");
//   printf("A =");
//   for(i=0; i<10; A[i]=rand()%10, printf(" %d", A[i]), i++);

//   printf("\nB =");
//   for(i=0; i<20; B[i]=rand()%10, printf(" %d", B[i]), i++);

//   for(i=0, k=0; i<20; i++)
//   {
//     if(A[0]==B[i])
//     {
//       repetido[k]=A[0];
//       k=1;
//       break;
//     }
//   }

//   for(i=1; i<10; i++)
//   {
//     for(j=i+1; j<10; j++)
//     {
//       if(A[i]==A[j])
//         A[j]=A[0];
//       else
//         repetido[j]=0;
//     }
//   }

//   for(i=1; i<10; i++)
//   {
//     for(j=0; j<20; j++)
//     {
//       if(A[i]==B[j] && A[i]!=A[0]); 
//     }
//   }
  
//   // for(i=0, repetido[0]=0; i<10; i++)
//   // {
//   //   for(j=i+1; j<10; j++)
//   //   {
//   //     if(A[i]==A[j])
//   //       repetido[j]=-1;
//   //     else
//   //       repetido[j]=0;
//   //   }
//   // }

//   // printf("\nRepetido =");
//   // for(i=0; i<10; printf(" %d", repetido[i]), i++);
// }

// int questao08()
// {
// /*
// Q8. Criar programa que leia dados de 20 elementos inteiros. imprimir o maior
// e o menor, sem ordenar, o percentual de números pares e a media dos
// elementos do vetor.
// */

//   int i, A[20], maior, menor;
//   float  media, percentpar;

//   // for(i=0; i<20; printf("Informe o %d elemento: ", i+1), scanf("%d", &A[i]), i++);

//   srand(time(NULL));

//   printf("A =");
//   for(i=0; i<20; A[i]=rand()%20, printf(" %d", A[i]), i++);

//   for(i=0, maior=A[0], menor=A[0], media=0, percentpar=0; i<20; i++)
//   {
//     if(A[i]>maior)
//       maior=A[i];
    
//     if(A[i]<menor)
//       menor=A[i];
    
//     if(A[i]%2==0)
//       percentpar++;
    
//     media+=A[i];
//   }
  
//   media/=i*1.0;
//   percentpar*=100.0/i;

//   printf("\n===== Dados do conjunto =====\n");
//   printf("\tMaior valor = %d\n", maior);
//   printf("\tMenor valor = %d\n", menor);
//   printf("\tPercentual de numeros pares = %.2f%%\n", percentpar);
//   printf("\tMedia dos valores declarados = %.2f\n", media);
//   return 0;
// }

// questao09()
// {
// /*
// Q9. Criar programa que leia elementos de uma matriz inteira de 10x10 e escreva os elementos da diagonal principal
// */
//   int i, j, matriz[10][10];
  
//   srand(time(NULL));
  
//   printf("Gerando a matriz...\n");
//   printf("A =\n");
//   for(i=0; i<10; i++)
//   {
//     for(j=0; j<10; matriz[i][j]=rand()%100, printf("\t%d", matriz[i][j]), j++);
//     printf("\n");
//   }

//   printf("\nOs elementos da diagonal principal sao:\n");
//   for(i=0; i<10; printf("\t%d", matriz[i][i]), i++);
  
//   return 0;
// }

// questao10()
// {
// /*
// Q10. Criar programa que leia e armazena os elementos de uma matriz M inteira 10x10 e imprima todos os elementos que estão em linhas pares e colunas impares.
// */
//   int i, j, matriz[10][10];
  
//   srand(time(NULL));
  
//   printf("Gerando a matriz...\n");
//   printf("A =\n");
//   for(i=0; i<10; i++)
//   {
//     for(j=0; j<10; matriz[i][j]=rand()%100, printf("\t%d", matriz[i][j]), j++);
//     printf("\n");
//   }

//   printf("\n\n====== Elementos das linhas pares ======\n");
//   for(i=0; i<10; i+=2)
//   {
//     printf("\n\tLinha %d =", i);
//     for(j=0; j<10; printf(" %d", matriz[i][j]), j++);
//     printf("\n");
//   }

//   printf("\n\n====== Elementos das colunas impares ======\n");
//   for(j=1; j<10; j+=2)
//   {
//     printf("\n\tColuna %d =", j);
//     for(i=0; i<10; printf(" %d", matriz[i][j]), i++);
//     printf("\n");
//   }
  
//   return 0;
// }

// questao11()
// {
// /* INCOMPLETA
// Q11. Criar e armazenar uma matriz a 10x10 e gerar e imprimir a matriz invertida
// */

//   int i, j, matriz[10][10], transposta[10][10];
  
//   srand(time(NULL));
  
//   printf("Gerando a matriz...\n");
//   printf("\nA =\n");
//   for(i=0; i<10; i++)
//   {
//     for(j=0; j<10; matriz[i][j]=rand()%100, printf("\t%d", matriz[i][j]), j++);
//     printf("\n");
//   }

//   printf("\nTransposta=\n");
//   for(i=0; i<10; i++)
//   {  
//     for(j=0; j<10; transposta[i][j]=matriz[j][i], printf("\t%d", transposta[i][j]), j++);
//     printf("\n");
//   }

//   return 0;
// }

// int main(void)
// {
//   questao03();
//   return 0;
// }