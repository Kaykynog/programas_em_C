#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");
    
    printf("Atividade 3, somando vetores e imprimindo o valor de cada um: \n \n");
    int vetA[6];
    vetA[0]=1; vetA[1]=0; vetA[2]=5; vetA[3]=-2; vetA[4]=100; vetA[5]=-7; // atribuido os  valores de cada posição do vetor
    int soma=0, pos=0;
   
   soma=vetA[0]+vetA[1]+vetA[5]; // somando os vetores de posição 0, 1 e 5
   printf("A somatoria dos vetores A0, A1, A5 é: %d \n", soma);
   
   for(int j=0; j<6; j++){ // enquanto j for menor que 6, incrementa 1. Utilizei o for para demonstrar cada vetor.
    printf("\n [%d] = %d \n", j, vetA[j]);
   }
return 0;
}
