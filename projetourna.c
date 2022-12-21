#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){

 setlocale(LC_ALL,"Portuguese");   
 int voto_nulo=0, voto_em_branco=0, bolsonaro=0, lula=0, votos=5;

 printf("BEM VINDO AO SEGUNDO TURNO DAS ELEIÇÕES PARA PRESIDENTE DA REPÚBLICA! \n");

 while(votos!=0){
 printf("Selecione uma das opções e aperter ENTER\n");
 printf(" Bolsonaro - 22\n Lula - 13\n VOTO EM BRANCO - 1\n VOTO NULO - 2\n DIGITE 0 PARA ENCERRAR O PROGRAMA\n");
 scanf("%d", &votos);

   switch (votos)
   {
   case 0:
    printf("URNA ENCERRADA!\n Pressione qualquer tecla para continuar");
    break;

   case 1:
    voto_em_branco=voto_em_branco+1;
    printf("VOTO EM BRANCO CONTABILIZADO COM SUCESSO! \n");
    break;

   case 2:
   voto_nulo=voto_nulo+1;
    printf("VOTO NULO CONTABILIZADO COM SUCESSO! \n");

   case 13:
    lula=lula+1;
    printf("VOTO EM LULA CONTABILIZADO COM SUCESSO! \n");
    break;
   
   case 22:
    bolsonaro=bolsonaro+1;
    printf("VOTO EM BOLSONARO CONTABILIZADO COM SUCESSO! \n");
    break;

   default:
   printf("OPÇÃO INVÁLIDA! \n");
    break;
   }
   getch();
 }
  printf("RESULTADOS: BOLSONARO: %d\n LULA: %d \n VOTO EM BRANCO %d \n VOTO NULO: %d\n", bolsonaro, lula, voto_em_branco, voto_nulo);

    return 0;
}
